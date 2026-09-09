
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int ans =b;
    while(b>0){
        if(b == ans || b==1){
            for(int i=1;i<=a;i++){
                printf("*");
            }
        }
        else{
            for(int i=1;i<=a;i++){
                if(i==1 || i==a){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        b--;
        printf("\n");
    }

    return 0;
}