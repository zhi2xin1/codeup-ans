#include <iostream>

int main() {
    int a[10];
    for(int & i : a){
        std::cin>>i;
    }
    for(int i=9;i>=0;--i){
        std::cout<<a[i]<<'\n';
    }
    std::cout<<std::flush;
    return 0;
}