
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long 
#define cin scanf

int tongchuso(int n){
    int dem=0;
    while(n>0){
        dem = dem + (n%10);
        n=n/10;
    }
    return dem;
}

int tonggiaithua(int n){
    int sum = 0;
    for(int i=2; i*i<=n ; i++){
        if(n%i==0){
            while(n%i==0){
             if(i>10){
                sum = sum + tongchuso(i);
             }
             else{
                sum = sum + i;
             }
                n=n/i;
            }
        }
    }
    if(n>1){
        sum=sum+ tongchuso(n);
    }
    return sum;

}

int main()
{
        int a;
        cin("%d",&a);
        if(tongchuso(a)==tonggiaithua(a)){
            printf("YES");
        }
        else{
            printf("NO");
        }
    return 0;
}