#include <stdio.h>
#define ll long long

int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int a;
        scanf("%d",&a);
        ll ans = (1l*a)*a;
        printf("%lld\n",ans);

    }
}