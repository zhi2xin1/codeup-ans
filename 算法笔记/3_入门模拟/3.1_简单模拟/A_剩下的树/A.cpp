#include <iostream>

void swap_less(int &a,int &b){
    int temp;
    if(a>b) {
        temp = a;
        a=b;
        b=temp;
    }
}

int main() {
    int l,n,a,b,now_n,
            left[100],right[100],
            l_sub;
    while (!std::cin.eof()){
        now_n=0;
        l_sub=0;
        std::cin>>l>>n;
        if(!l&&!n)
            break;
        std::cin >> a >> b;
        swap_less(a,b);
        left[0]=a;
        right[0]=b;
        for(int i=1;i<n;++i) {
            std::cin >> a >> b;
            swap_less(a,b);
            if(a<=right[now_n]){
                if(a<left[now_n])
                    left[now_n]=a;
                if(b>right[now_n])
                    right[now_n]=b;
            }
            else{
                left[++now_n]=a;
                right[now_n]=b;
            }
        }
        for(int i=0;i<=now_n;++i){
            l_sub+=right[i]-left[i]+1;
        }
        l+=1-l_sub;
        std::cout<<l<<'\n';
    }
    std::cout<<std::flush;
    return 0;
}

