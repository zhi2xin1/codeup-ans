#include <iostream>

int main() {
    int temp, sum, n, m;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
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

