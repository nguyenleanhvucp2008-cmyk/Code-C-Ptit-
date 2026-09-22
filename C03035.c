
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long 
#define cin scanf

int in(int n){
    int ans=0;
    while(n>0){
      ans = ans*10+ (n%10);
      n=n/10;
    }
    return ans ;
}

int gcd(int a,int b){
    while(b!=0){
        int ans = a%b;
        a=b;
        b=ans;
    }
    return a;
}


int main()
{
    int n;
    cin("%d",&n);
    while(n--){
        int a;
        cin("%d",&a);
        int bns = in(a);
        if(gcd(a,bns)==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    

    return 0;
}