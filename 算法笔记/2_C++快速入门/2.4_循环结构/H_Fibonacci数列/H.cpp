#include <iostream>

int main(){
    int fib_before_1=1,fib_before_2=1,fib_now,N;
    std::cin>>N;
    for(int i=3;i<=N;++i){
        fib_now=fib_before_1+fib_before_2;
        fib_before_2=fib_before_1;
        fib_before_1=fib_now;
    }
    if(N==1||N==2)
        std::cout<<1<<std::endl;
    else
        std::cout<<fib_now<<std::endl;
    return 0;
}

