#include <iostream>
#include <iomanip>

struct student {
    int num;
    char name[10];
    short score[3];
    double avg;
} students[10], *the_one, *max_one;

double avg_scores[3];

void input() {
    the_one = students;
    do {
        std::cin >> the_one->num >> the_one->name
                 >> the_one->score[0] >> the_one->score[1] >> the_one->score[2];
        the_one->avg = (the_one->score[0] + the_one->score[1] + the_one->score[2]) / 3.0;
        avg_scores[0] += the_one->score[0];
        avg_scores[1] += the_one->score[1];
        avg_scores[2] += the_one->score[2];
    } while (++the_one - students < 10);
    avg_scores[0] /= 10.0;
    avg_scores[1] /= 10.0;
    avg_scores[2] /= 10.0;
}

void compute() {
    max_one = students;
    the_one = students;
    do {
        if (the_one->avg > max_one->avg)
            max_one = the_one;
    } while (++the_one - students < 10);
}

void output() {
    std::cout << std::fixed << std::setprecision(2)
              << avg_scores[0] << ' ' << avg_scores[1] << ' ' << avg_scores[2] << '\n'
              << max_one->num << ' ' << max_one->name << ' '
              << max_one->score[0] << ' ' << max_one->score[1] << ' ' << max_one->score[2]
              << std::endl;
}

int main() {
    input();
    compute();
    output();
    return 0;
}

