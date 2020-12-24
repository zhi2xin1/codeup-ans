#include <iostream>

struct student {
    int num;
    char name[20];
    char sex;
    int age;
};

int main() {
    student all[20],*the_one=all;
    int n;
    std::cin >> n;
    do {
        std::cin >> (*(the_one)).num >> (*the_one).name >> (*the_one).sex >> (*the_one).age;
    }
    while(++the_one-all<n);
    the_one=all;
    do {
        std::cout << (*(the_one)).num << ' ' << (*the_one).name
                  << ' ' << (*the_one).sex << ' ' << (*the_one).age << '\n';
    }
    while(++the_one-all<n);
    std::cout<<std::flush;
    return 0;
}

