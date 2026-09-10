

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int in(int a){
    int ans=1;
    for(int i=2;i*i <= a;i++){
      if(a%i==0){
        if(i*i==a){
            ans= ans + i;
        }
        else{
            ans= ans + i;
            ans= ans + a/i;
        }
      }
    }
    return ans;
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(in(i)==i){
            printf("%d ",i);
        }
    }

    return 0;
}