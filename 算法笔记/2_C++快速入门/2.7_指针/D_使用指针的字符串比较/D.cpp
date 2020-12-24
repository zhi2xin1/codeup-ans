#include <iostream>
#include <utility>
#include <cstring>

int main() {
    char a[21], b[21], c[21], *A = a, *B = b, *C = c;
    std::cin >> a >> b >> c;
    if (strcmp(A, B) > 0)
        std::swap(A, B);
    if (strcmp(A, C) > 0)
        std::swap(A, C);
    if (strcmp(B, C) > 0)
        std::swap(B, C);
    std::cout << A << '\n' << B << '\n' << C << std::endl;
    return 0;
}

