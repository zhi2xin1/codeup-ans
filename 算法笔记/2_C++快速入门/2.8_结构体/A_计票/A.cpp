#include <iostream>
#include <cstring>

struct person {
    char name[20];
    int count;
} leader[3] = {"Li", 0, "Zhang", 0, "Fun", 0};

int main() {
    char name[20];
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> name;
        if (strcmp(name, leader[0].name) == 0)
            ++leader[0].count;
        else if (strcmp(name, leader[1].name) == 0)
            ++leader[1].count;
        else
            ++leader[2].count;
    }
    for (auto l:leader)
        std::cout << l.name << ':' << l.count << '\n';
    std::cout << std::flush;
    return 0;
}

