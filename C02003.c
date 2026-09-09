
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int n=a;
    for(int i=0;i<a;i++){
        printf("*");
    }
    n=n-1;
    printf("\n");
    while(n>1){
        for(int i=1;i<=a;i++){
            if(i==1 || i==a){
                printf("*");
            }
            else{
                 printf(".");
            }
        }
        printf("\n");
        n--;
    }
    for(int i=0;i<a;i++){
        printf("*");
    }

    return 0;
}