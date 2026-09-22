
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long 
#define cin scanf


int ok(int n){
    int dem=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(i*i==n && i%2==0){
                dem++;
            }
            else if(n%i==0){
                if(i%2==0) dem++;
                if((n/i)%2==0) dem++;
            }
        }
    }
    return dem;
}



int main()
{

    int n;
    cin ("%d",&n);
    while(n--){
        int a;
        cin("%d",&a);
        printf("%d\n",ok(a));
    }
    
    

    return 0;
}