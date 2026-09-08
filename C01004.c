#include <stdio.h>
#include <math.h>
#include<stdbool.h>

#define ll long long 
#define MAX 10005 
int cn[MAX];

bool check(int n){
    int ans=0;
    while(n>0){
    ans= ans+(n%10);
    n=n/10;
    }
    if(ans%5==0){
        return true;
    }
    return false;
}

void sang(){
cn[0]=1;
cn[1]=1;
for(int i=2;i<= MAX;i++){
    if(cn[i]==0){
        for(ll j=(long long)i*i;j < MAX;j+=i){
            cn[j]=1;
        }
      if(check(i)== true){
        cn[i]=2;
      }
    }
}
}

int main(){
    int n;
    scanf("%d",&n);
    sang();
    int dem=0;
    for(int i=1; i<=n;i++){
        if(cn[i]==2){
            printf("%d ",i);
            dem++;
        }
    }
    printf("\n");
    printf("%d",dem);
}