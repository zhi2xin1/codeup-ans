#include <iostream>

int main() {
    int temp,sum,n;
    std::cin>>n;
    while(n!=0){
        sum=0;
        for(int i=0;i<n;++i){
            std::cin>>temp;
            sum+=temp;
        }
        std::cout<<sum<<std::endl;
        std::cin>>n;
    }
    return 0;
}

