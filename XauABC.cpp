#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define el '\n'

int n;
string ok;

void xau(int pos){
    if (pos>n){
        cout << ok << el;
        return;
    }
    for(int i='A';i<='C';i++){
        int len= ok.size();
        if(!ok.empty() && ok[len-1]==i){
            continue;
        }
        else{
            ok.push_back(i);
            xau(pos+1);
            ok.pop_back();
        }
    }

}


int main(){

    cin >> n;
    ok="";
    xau(1);

}




