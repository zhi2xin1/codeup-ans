#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
    double a,b,c,x,r_1,r_2;
    std::cin>>a>>b>>c;
    x=b*b-4.0*a*c;
    if(x>0){
        x=pow(x,0.5);
        r_1=(-b+x)/2.0/a;
        r_2=(-b-x)/2.0/a;
        std::cout<<std::fixed<<std::setprecision(2)
                 <<"r1="<<std::setw(7)<<r_1<<"\nr2="<<std::setw(7)<<r_2<<std::endl;
    }
    else
        std::cout<<"No real roots!"<<std::endl;
    return 0;
}
