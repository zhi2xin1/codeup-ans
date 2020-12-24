#include <iostream>
#include <utility>

void input(int a[]){
    for(int i=0;i<10;++i)
        std::cin>>a[i];
}

void output(int a[]){
    for(int i=0;i<9;++i)
        std::cout<<a[i]<<' ';
    std::cout<<a[9]<<std::endl;
}

void find_swap(int a[]){
    int *max=a,*min=a;
    for(int i=0;i<10;++i){
        if(a[i]>*max)
            max=a+i;
        else if(a[i]<*min)
            min=a+i;
    }
    if(max!=a&&min-a!=9) {
        std::swap(*min, a[0]);
    }
    std::swap(*max,a[9]);
}

int main() {
    int a[10];
    input(a);
    find_swap(a);
    output(a);
    return 0;
}

