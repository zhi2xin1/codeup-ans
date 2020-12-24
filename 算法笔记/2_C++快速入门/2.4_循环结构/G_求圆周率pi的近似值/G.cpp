#include <iostream>
#include <iomanip>

int main(){
    double pi,pi_4=0.0,temp,n=1.0;
    bool flag=true;
    while(true){
        temp=1.0/n;
        n+=2;
        if(temp>0.000001)
            pi_4+=flag?temp:-temp;
        else
            break;
        flag=!flag;
    }
    pi=4*pi_4;
    std::cout<<std::fixed<<std::setprecision(8)<<std::setw(10)
    <<pi<<std::endl;
    return 0;
}
