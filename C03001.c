
#include <stdio.h>
#include <math.h>
#include <string.h>

int tach(int a){
    int sum=0;
    while(a>0){
        sum = sum + (a%10);
        a=a/10;
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    while(n--){
        int a;
        scanf("%d",&a);
        if(tach(a)%10==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}