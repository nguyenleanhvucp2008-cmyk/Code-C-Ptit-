

#include <stdio.h>
#define ll long long


ll gcd(ll a,ll b){
    while(b!=0){
        ll ans = a%b;
        a=b;
        b=ans;
    }
    return a;
}

int main()
{
    ll n;
    scanf("%lld", &n);
    while(n--){
    ll a,b;
    scanf("%lld%lld", &a,&b);
    ll ans = (1l*a)*b;
    ans = ans / (1l*gcd(a,b));
    printf ("%lld ", ans);
    printf ("%lld\n", gcd(a,b));
    }
    return 0;
}