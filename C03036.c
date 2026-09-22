
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long 
#define cin scanf

bool kiemtra(ll n){
    ll sum=0;
    ll ans=0;
    ll n2=n;
    while(n>0){
        ans = ans*10 + (n%10);
        sum = sum + (n%10);
        ll ok = n%10;
        if(ok%2==0){
            return false;
        }
        n=n/10;
    }
    if(sum%2==0) return false;
    if(ans != n2) return false;
    return true;

}

int main()
{

    ll n;
    cin("%lld",&n);
    while(n--){
        ll a;
        cin ("%lld",&a);
        if(kiemtra(a)== true){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}