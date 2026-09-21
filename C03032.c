
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long
#define MAX 1000000
#define cin scanf


int cn[1000005]={0};
int bns[1000005]={0};

bool check(int n){
    if(n==2 || n==3 || n==5 || n==7){
        return true;
    }
    else{
        return false;
    }
}

bool check1(int n){
    while(n>0){
        int ans = n%10;
        if(check(ans)== false){
            return false;
        }
        n=n/10;
    }
    return true;
}

void sang(){
    cn[0]=1;
    cn[1]=1;
    for(int i=2;i*i <= MAX;i++){
        if(cn[i]==0){
            for(int j=i*i;j<= MAX;j+=i ){
                cn[j]=1;
            }
        }
    }
}

void ok(){
    sang();
    for(int i=1;i<= MAX;i++){
        bns[i]= bns[i-1];
        if(cn[i]==0 && check1(i)== true){
            bns[i]++;
        }
    }
}


int main()
{
    int n;
    cin ("%d",&n);
    ok();
    while(n--){
        int a,b;
        cin("%d%d",&a,&b);
        int vu= bns[b] - bns[a-1];
        printf("%d\n",vu);
    }

    return 0;
}