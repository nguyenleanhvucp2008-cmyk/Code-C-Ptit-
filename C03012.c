

#include <stdio.h>
#include <math.h>

int cn[300];
int ans[1000001];


void fibo(){
    cn[1]=0;
    cn[2]=1;
    ans[0]=1;
    ans[1]=1;
    for(int i=3;i<=30;i++){
        cn[i]= cn[i-1]+ cn[i-2];
        ans[cn[i]]=1;
        
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    fibo();
    if(ans[n]==1){
        printf("1");
    }
    else{
        printf("0");
    }
    

    return 0;
}