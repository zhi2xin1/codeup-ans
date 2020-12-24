#include <iostream>

int main() {
    char A[15] = "I love China!\0", *a = A;
    int n;
    std::cin >> n;
    a = a + n;
    std::cout << a << std::endl;
    return 0;
}

