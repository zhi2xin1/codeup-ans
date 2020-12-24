#include <iostream>
#include <iomanip>

int main(){
    double a=1.0,b=2.0,temp,sum=0.0;
    for(int i=0;i<20;++i){
        sum+=b/a;
        temp=b;
        b=a+b;
        a=temp;
    }
    std::cout<<std::fixed<<std::setprecision(6)
    <<sum<<std::endl;
}
