

#include <stdio.h>
#include <math.h>


int main()
{
    int a;
    scanf("%d",&a);
    int n=1;
    int ans=a;
    while(a--){
     if(n!=ans){
        for(int i=1;i<=n;i++){
           if(i==1 || i==n){
            printf("*");
           }
           else{
            printf(".");
           }
        }
        printf("\n");
     }
     else{
        for(int i=1;i<=ans;i++){
            printf("*");
        }
     }
       n++; 
    }

    return 0;
}