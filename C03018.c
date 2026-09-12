
#include <stdio.h>
#include <math.h>
#include <stdbool.h>



int cn[1005]={0};
void sang(){
    cn[0]=1;
    cn[1]=1;
    for(int i=2;i*i<=1000;i++){
        if(cn[i]==0){
            for(int j=i*i;j<=1000;j+=i){
                cn[j]=1;
            }
        }
    }
}

int tong(int n){
    int ans=0;
    while(n>0){
        ans = ans + (n%10);
        n=n/10;
    }
    return ans;
}

bool check(int a){
    int n = tong(a);
    if(n==1 || n==2 || n==3||n==5||n==8||n==13 || n==21){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    sang();
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    int ok=1;
    for(int i=a;i<=b;i++){
        if(cn[i]==0 && check(i) == true){
          if(ok==0){
            printf(" ");
          }
            printf("%d",i);
            ok=0;
        }
    }

    return 0;
}