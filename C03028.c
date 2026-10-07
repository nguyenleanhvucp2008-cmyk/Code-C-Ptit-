
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long 
#define cin scanf

int cn[11]={0};
int cn2[11]={0};

int main()
{
    int n;
    cin("%d",&n);
    int ans=1;
    while (ans<=n)
    {
      for(int i=1;i<=ans;i++){
        if(i==1 || i==ans){
            cn[i]=1;
            cn2[i]=1;
        }
        else{
            int ok =cn[i];
             cn[i]=cn[i]+cn2[i-1];
             cn2[i]=ok;
        }
        printf("%d ",cn[i]);
      }
        printf("\n");
      ans++;
    }
    
    

    return 0;
}