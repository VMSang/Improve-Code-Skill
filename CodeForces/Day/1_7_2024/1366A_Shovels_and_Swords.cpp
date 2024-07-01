#include<bits/stdc++.h>
int t,s,d;
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&s,&d);
        if(s<d)std::swap(s,d);
        if(s>=2*d){
            printf("%d\n",d);
        }else{
            printf("%d\n",(s+d)/3);
        }
    }
    return 0;
}
                                                                