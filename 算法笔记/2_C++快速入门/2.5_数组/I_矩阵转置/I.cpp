#include <iostream>

int main(){
    int a[2][3],b[3][2];
    for(auto & i : a)
        for(int & j : i)
            std::cin>>j;
    for(int i=0;i<3;++i)
        for(int j=0;j<2;++j)
            b[i][j]=a[j][i];
    for(auto & i : b) {
        for (int j : i)
            std::cout << j << ' ';
        std::cout << std::endl;
    }
    return 0;
}

