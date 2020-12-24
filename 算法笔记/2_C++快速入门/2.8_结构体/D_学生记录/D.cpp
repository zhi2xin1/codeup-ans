#include <iostream>

struct student {
    int num;
    char name[10];
    short score[3];
} students[5], *the_one;

void input() {
    the_one = students;
    do {
        std::cin >> (*(the_one)).num >> (*the_one).name
                 >> (*the_one).score[0] >> (*the_one).score[1] >> (*the_one).score[2];
    } while (++the_one - students < 5);
}

void output() {
    the_one = students;
    do {
        std::cout << (*(the_one)).num << ' ' << (*the_one).name << ' '
                  << (*the_one).score[0] << ' ' << (*the_one).score[1] << ' ' << (*the_one).score[2] << '\n';
    } while (++the_one - students < 5);
    std::cout << std::flush;
}

int main() {
    input();
    output();
    return 0;
}

