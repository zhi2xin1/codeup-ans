#include <iostream>

void re(char a[],int size){
    char temp;
    for(int i=0;i<size/2;++i){
        temp=a[i];
        a[i]=a[size-i-1];
        a[size-i-1]=temp;
    }
}

int main() {
    const int max_size=100;
    int size=0;
    char a[max_size];
    while(true) {
        a[size] = (char)getchar();
        if(a[size++]=='\n') {
            a[size]='\0';
            --size;
            break;
        }
    }
    re(a,size);
    std::cout<<a<<std::endl;
    return 0;
}

