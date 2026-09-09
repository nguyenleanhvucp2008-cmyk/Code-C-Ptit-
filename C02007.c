
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    int n=0;
    int x=a;
    while(x--){
        for(int i=1;i<=a;i++){
            if(i< (a-n)){
                printf("~");
            }
            else{
                printf("*");
            }
        }
        n++;
        printf ("\n");
    }
    
    return 0;
}