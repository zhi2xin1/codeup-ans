#include <iostream>

int main() {
    int temp, sum, m;
    while (!std::cin.eof()) {
        sum = 0;
        std::cin >> m;
        for (int j = 0; j < m; ++j) {
            std::cin >> temp;
            sum += temp;
        }
        std::cout << sum << std::endl;
    }
    return 0;
}

