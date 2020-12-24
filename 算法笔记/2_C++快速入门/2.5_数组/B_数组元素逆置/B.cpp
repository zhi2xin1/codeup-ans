#include <iostream>

int main() {
    int ori[10];
    for (int &i:ori)
        std::cin >> i;
    for (int i=9;i>=0;--i)
        std::cout << ori[i] << std::endl;
    return 0;
}