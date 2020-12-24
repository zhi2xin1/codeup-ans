#include <iostream>

int main(){
    int i=0,sum=0,N;
    std::cin>>N;
    while(true){
        if(i==N)
            break;
        sum+=++i;
    }
    std::cout<<sum<<std::endl;
    return 0;
}
