#include <cstdio>

int main() {
    char now='A';
    while (now!='\n'){
        now=(char)getchar();
        if(now>='A'&&now<='Z')
            now='Z'-now+'A';
        else if(now>='a'&&now<='z')
            now='z'-now+'a';
        putchar(now);
    }
    return 0;
}