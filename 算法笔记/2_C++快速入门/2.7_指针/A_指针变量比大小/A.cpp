#include <iostream>


int main() {
    int a, b, *c = &a, *d = &b;
    std::cin >> *c >> *d;
    if (*c > *d)
        std::cout << *c << ' ' << *d << std::endl;
    else
        std::cout << *d << ' ' << *c << std::endl;
    return 0;
}

