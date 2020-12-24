#include <iostream>
#include <iomanip>

int main(){
    double l,p;
    std::cin>>l;
    if(l<=100000)
        p=0.1*l;
    else if(l<=200000)
        p=10000+0.075*(l-100000);
    else if(l<=400000)
        p=17500+0.05*(l-200000);
    else if(l<=600000)
        p=27500+0.03*(l-400000);
    else if(l<=1000000)
        p=33500+0.015*(l-600000);
    else
        p=39500+0.01*(l-1000000);
    std::cout<<std::fixed<<std::setprecision(2)<<p<<std::endl;
    return 0;
}
