#include <iostream>

int main(){
    int i=0,sum=0;
    while(true){
        if(sum>1000)
            break;
        sum+=++i;
    }
    std::cout<<i<<std::endl;
    return 0;
}
