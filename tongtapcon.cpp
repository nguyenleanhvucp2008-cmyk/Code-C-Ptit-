#include<bits/stdc++.h>

using namespace std;
#define ll long long 
#define el '\n'

int n;
ll x;
ll sum=0;
ll a[10005];

void tongchuso(int pos,ll tong){
    if(pos==n){
        if(tong==x){
            sum++;
        }
        return;
    }
    tongchuso(pos+1,tong);
    tongchuso(pos+1,tong+a[pos]);
}






int main(){
    
    cin >> n >> x;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    tongchuso(0,0);
    if(sum>0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;



}



