
#include <stdio.h>
#include <math.h>
#include <stdbool.h>


#define ll long long 
#define cin scanf


int cn[75]={0};

int gcd(int a, int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;

}


void sang(){
 cn[0]=1;
 cn[1]=1;
    for(int i=2;i*i<=72;i++){
        if(cn[i]==0){
            for(int j=i*i;j<=72;j+=i){
                cn[j]=1;
            }
        }
    }
}

bool check(int n){
    sang();
    int ans =0;
    while(n>0){
        ans = ans + (n%10);
        n=n/10;
    }
    if(cn[ans] == 0){
        return true;
    }
    return false;
}


int main()
{
    int n;
    cin("%d",&n);
    while(n--){
        int a,b;
        cin ("%d%d",&a,&b);
        int ok = gcd(a,b);
        if(check(ok)== true){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}