#include <iostream>
#include <iomanip>

int main(){
    double a,b;
    std::cin>>a>>b;
    if(a<b)
        std::cout<<std::fixed<<std::setprecision(2)
                 <<a<<' '<<b<<std::endl;
    else
        std::cout<<std::fixed<<std::setprecision(2)
                 <<b<<' '<<a<<std::endl;
    return 0;
}
