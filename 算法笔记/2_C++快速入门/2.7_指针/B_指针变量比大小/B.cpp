#include <iostream>


int main() {
    int a, b, c, *A = &a, *B = &b, *C = &c;
    std::cin >> *A >> *B >> *C;
    if (*A > *B) {
        if (*A > *C) {
            if (*B > *C)
                std::cout << *A << ' ' << *B << ' ' << *C << std::endl;
            else
                std::cout << *A << ' ' << *C << ' ' << *B << std::endl;
        } else
            std::cout << *C << ' ' << *A << ' ' << *B << std::endl;
    } else if (*B > *C) {
        if (*A > *C)
            std::cout << *B << ' ' << *A << ' ' << *C << std::endl;
        else
            std::cout << *B << ' ' << *C << ' ' << *A << std::endl;
    } else
        std::cout << *C << ' ' << *B << ' ' << *A << std::endl;
    return 0;
}

