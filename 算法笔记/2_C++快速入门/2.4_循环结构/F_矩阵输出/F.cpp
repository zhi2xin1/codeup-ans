#include <iostream>
#include <iomanip>

int main(){
    int a=1;
    for(int i=0;i<5;++i){
        for(int j=0;j<4;++j){
            std::cout<<std::setw(3)<<a++;
        }
        std::cout<<std::endl;
    }
    return 0;
}
