#include <iostream>
#include <limits>

int main(){
    int a,b,c,max=std::numeric_limits<int>::min();
    std::cin>>a>>b>>c;
    if(a>max)
        max=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
    std::cout<<max<<std::endl;
    return 0;
}
