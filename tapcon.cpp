#include <bits/stdc++.h>

using namespace std;

#define ll long long 
#define el '\n'

int n,k;
vector <int> ok;

void tapcon(int pos,int st){
    if(pos>k){
        for(int i=0;i< ok.size();i++ ){
            cout << ok[i] << " ";
        }
        cout << el;
        return;
    }
    for(int i=st;i<=n;i++){
        ok.push_back(i);
        tapcon(pos+1,i+1);
        ok.pop_back();
    }
}


int main(){

    cin >> n >> k;
    tapcon(1,1);


}