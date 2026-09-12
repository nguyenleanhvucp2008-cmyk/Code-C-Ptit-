

#include <stdio.h>
#include <math.h>

int cn[31];
void fibo(){
    cn[1]=0;
    cn[2]=1;
    for(int i=3;i<=30;i++){
        cn[i]= cn[i-1]+ cn[i-2];
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    fibo();
    for(int i=1;i<=n;i++){
        printf("%d ", cn[i]);
    }
    

    return 0;
}