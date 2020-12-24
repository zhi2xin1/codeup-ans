#include <iostream>
#include <iomanip>

int main(){
    double a,b,c,d;
    std::cin>>a>>b>>c;
    if(a>b){
        d=a;
        a=b;
        b=d;
    }
    if(b>c){
        d=b;
        b=c;
        c=d;
    }
    if(a>b){
        d=a;
        a=b;
        b=d;
    }
    std::cout<<std::fixed<<std::setprecision(2)
             <<a<<' '<<b<<' '<<c<<std::endl;
    return 0;
}
