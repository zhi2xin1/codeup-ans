#include <cstdio>
#define max_size 100

int long_int1[max_size],long_int2[max_size];

void input_long_int(int long_int[],bool &sign,bool &con,int &i){
    for(int j=0;j<max_size;++j){
        long_int[j]=0;
    }
    sign = false;
    con=true;
    char temp='0';
    i=0;
    while(temp!=EOF&&i<max_size){
        temp=(char)getchar();
        if(temp>='0'&&temp<='9') {
            long_int[i++] =temp - '0';
        }
        else if(temp=='-')
            sign= true;
        else if(temp==' '||temp=='\n')
            break;
    }
    if(temp==EOF)
        con= false;
}

void overturn_int(int long_int[],int n){
    int n_2=n/2;
    int temp;
    --n;
    for(int i=0;i<n_2;++i){
        temp=long_int[i];
        long_int[i]=long_int[n-i];
        long_int[n-i]=temp;
    }
}

void add_same_sign(int longer[], const int other[], int &n){
    int c=0;
    for(int i=0;i<n;++i){
        longer[i]+= other[i] + c;
        if(longer[i] >= 10){
            c=1;
            longer[i]-=10;
        }
        else
            c=0;
    }
    if(c==1) {
        longer[n]=1;
        ++n;
    }
}

void add_diff_sign(int longer[], const int other[], int &n, bool &sign){
    sign= false;
    int c=0;
    for(int i=0;i<n;++i){
        longer[i]-= other[i] + c;
        if(longer[i] < 0){
            c=1;
            longer[i]+=10;
        }
        else
            c=0;
    }
    if(c==1)
        sign = true;
}

void output(int long_int[],bool sign,int n){
    if(sign&&long_int[0]!=0)
        putchar('-');
    if(long_int[0]==0)
        putchar('0');
    else {
        for (int i = 0; i < n; ++i)
            putchar(long_int[i] + '0');
    }
    putchar('\n');
}

int main() {
    int n1,n2,n,*longer,*other;
    bool con=true,sign1,sign2,sign,longer_sign;
    while (con){
        input_long_int(long_int1,sign1,con,n1);
        input_long_int(long_int2,sign2,con,n2);
        overturn_int(long_int1,n1);
        overturn_int(long_int2,n2);
        if(n1<n2){
            n=n2;
            longer=long_int2;
            other=long_int1;
            longer_sign=sign2;
        }
        else{
            n=n1;
            longer=long_int1;
            other=long_int2;
            longer_sign=sign1;
        }
        if(sign1==sign2) {
            add_same_sign(longer, other, n);
            sign = longer_sign;
        }
        else{
            add_diff_sign(longer, other,n, sign);
            if(longer_sign)
                sign = !sign;
        }
        overturn_int(longer, n);
        output(longer, sign,n);
    }
    return 0;
}

