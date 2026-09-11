

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int cn[10]={1};

void check(){
    int ans=1;
    cn[0]=1;
    for(int i=1;i<=9;i++){
        ans= ans*i;
        cn[i]= ans;
    }
}

int in(int n) {
    int sum=0;
    check();
    while(n>0){
        int ans = n%10;
        sum= sum + cn[ans];
        n=n/10;
    }
    return sum;
}


int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    check();
    for(int i =a;i<=b;i++){
        if(in(i)==i){
            printf("%d ",i);
        }
    }
    return 0;
}