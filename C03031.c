
#include <stdio.h>
#include <math.h>
#include <stdbool.h>


#define ll long long 
#define cin scanf


int gcd(int a, int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;

}



int main()
{
    int n;
    cin ("%d",&n);
    while(n--){
        int a,b,c,d;
        cin("%d%d%d%d",&a,&b,&c,&d);
        int ans = gcd(a,b);
        int bns = gcd(c,d);
        if(ans == bns){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}