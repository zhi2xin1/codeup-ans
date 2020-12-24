#include <iostream>

int main() {
    int a, b;
    while (!std::cin.eof()) {
        std::cin >> a >> b;
        std::cout << a + b << '\n' << std::endl;
    }
    return 0;
}