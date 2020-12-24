#include <iostream>

int main() {
    char A[100],B[100];
    int i=0,result=0;
    std::cin.getline(A,100);
    std::cin.getline(B,100);
    while(A[i]!='\0'||B[i]!='\0')
        if(A[i]==B[i])
            ++i;
        else if(A[i]=='\0')
            result=-B[i];
        else if(B[i]=='\0')
            result=-A[i];
        else{
            result=A[i]-B[i];
            break;
        }
    std::cout<<result;
    return 0;
}