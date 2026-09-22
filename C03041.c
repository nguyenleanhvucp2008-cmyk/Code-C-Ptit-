
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long 
#define cin scanf

bool check(int a, int b,int c,int d){
    int ans = c-a;
    int bns = d-b;
    if(ans==bns){
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin("%d",&n);
    while(n--){
        int a,b,c,d;
        cin("%d%d%d%d",&a,&b,&c,&d);
        if(check(a,b,c,d)==true){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}