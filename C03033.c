
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long 
#define cin scanf


void ok(int n){
    int ans;
    int mu=0;
    bool vu=true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                mu++;
                n=n/i;
            }
        if(vu == false){
            printf(" * ");
        }
        printf("%d^%d",i,mu);
        vu=false;
        }
        mu=0;
    }
    if (n>1){
        printf(" * ");
        printf("%d^1",n);
    }
}


int main()
{
    int n;
    cin("%d",&n);
    while(n--){
        int a;
        cin("%d",&a);
        printf("%d",a);
        printf(" = ");
        ok(a);
        printf("\n");
    }

    return 0;
}