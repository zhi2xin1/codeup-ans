#include <iostream>

int main(){
    int i=0,sum=0;
    do{
        sum+=++i;
    }while(i<100);
    std::cout<<sum<<std::endl;
    return 0;
}
