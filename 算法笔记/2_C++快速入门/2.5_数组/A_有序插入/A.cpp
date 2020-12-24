#include <iostream>

int main() {
    int ori[10], n;
    for (int i = 0; i < 9; ++i)
        std::cin >> ori[i];
    std::cin >> n;
    for (int i = 8; i >= 0; --i) {
        if (ori[i] > n)
            ori[i + 1] = ori[i];
        else {
            ori[i + 1] = n;
            break;
        }
    }
    for (int i:ori)
        std::cout << i << std::endl;
}
