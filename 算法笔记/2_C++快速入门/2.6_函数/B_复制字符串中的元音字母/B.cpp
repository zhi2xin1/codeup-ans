#include <iostream>

void vowels(const char s1[], char s2[]){
    int i=0,j=0;
    bool non_eof=true;
    while(non_eof){
        switch (s1[i++]) {
            case 'a':s2[j++]='a';break;
            case 'e':s2[j++]='e';break;
            case 'i':s2[j++]='i';break;
            case 'o':s2[j++]='o';break;
            case 'u':s2[j++]='u';break;
            case 'A':s2[j++]='A';break;
            case 'E':s2[j++]='E';break;
            case 'I':s2[j++]='I';break;
            case 'O':s2[j++]='O';break;
            case 'U':s2[j++]='U';break;
            case '\0':non_eof= false;
        }
    }
    s2[j]='\0';
}

int main() {
    const int max_size=100;
    int size=0;
    char s1[max_size],s2[max_size];
    while(true) {
        s1[size] = (char)getchar();
        if(s1[size++]=='\n') {
            s1[size]='\0';
            --size;
            break;
        }
    }
    vowels(s1,s2);
    std::cout<<s2<<std::endl;
    return 0;
}

