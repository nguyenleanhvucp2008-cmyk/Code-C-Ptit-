

#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX 1500000

int cn[MAX];
void sang(){
    cn[1]=1;
    cn[0]=1;
    for(int i=2;i*i < MAX;i++){
        if(cn[i]==0){
            for(int j=i*i;j< MAX;j+=i){
                cn[j]=1;
            }
        }
    }
}


int main()
{
    int n;
    scanf("%d", &n);
    sang();
    int ans=0;
    for(int i=2;;i++){
        if(cn[i]==0){
            printf("%d\n",i);
            ans++;
        }
        if(ans==n){
            break;
        }
    }

    return 0;
}