#include <iostream>

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int a[10];
    for(int &i:a)
        std::cin>>i;
    for(int i=0;i<10;++i) {
        for (int j = 0; j < 9; ++j) {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
    for(int i:a)
        std::cout<<i<<'\n';
    std::cout<<std::flush;
    return 0;
}

