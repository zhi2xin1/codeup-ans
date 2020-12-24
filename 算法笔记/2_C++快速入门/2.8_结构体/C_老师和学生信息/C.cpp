#include <iostream>

struct person {
    int num;
    char name[10];
    char sex;
    char job;
    union {
        int class_num;
        char position[10];
    } category;
};

int main() {
    person all[100], *the_one = all;
    int n;
    std::cin >> n;
    do {
        std::cin >> (*(the_one)).num >> (*the_one).name >> (*the_one).sex >> (*the_one).job;
        if ((*the_one).job == 's')
            std::cin >> (*the_one).category.class_num;
        else
            std::cin >> (*the_one).category.position;
    } while (++the_one - all < n);
    the_one = all;
    do {
        std::cout << (*(the_one)).num << ' ' << (*the_one).name
                  << ' ' << (*the_one).sex << ' ' << (*the_one).job << ' ';
        if ((*the_one).job == 's')
            std::cout << (*the_one).category.class_num << '\n';
        else
            std::cout << (*the_one).category.position << '\n';
    } while (++the_one - all < n);
    std::cout << std::flush;
    return 0;
}

