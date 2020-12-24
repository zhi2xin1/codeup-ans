#include <iostream>

int main() {
    int yang_hui[2][10]={{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1}},n;
    bool x=false;
    std::cin>>n;
    std::cout<<1<<'\n';
    for(int i=1;i<n;++i){
        std::cout<<1<<' ';
        for(int j=1;j<i;++j) {
            yang_hui[!x][j] = yang_hui[x][j - 1] + yang_hui[x][j];
            std::cout<<yang_hui[!x][j]<<' ';
        }
        std::cout<<1<<'\n';
        x=!x;
    }
    return 0;
}