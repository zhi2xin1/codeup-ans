#include <iostream>

int main(){
    const int N=20;
    int fib[N];
    fib[0]=fib[1]=1;
    std::cout<<fib[0]<<'\n'<<fib[1]<<'\n';
    for(int i=2;i<N;++i){
        fib[i]=fib[i-1]+fib[i-2];
        std::cout<<fib[i]<<'\n';
    }
    std::cout<<std::flush;
    return 0;
}

