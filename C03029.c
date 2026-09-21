
#include <stdio.h>
#include <math.h>
#include <stdbool.h>


#define ll long long 
#define cin scanf


bool check(ll n){
        while(n>0){
            if(n%2 !=0 ){
                return false;
            }
            n=n/10;
        }
        return true;
}


int main()
{
    ll n;
    cin ("%lld",&n);
    while(n--){
        ll a;
        cin ("%lld",&a);
        if(check(a)== true){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}