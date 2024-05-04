#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ones = 0;
    int zeros = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '1')
            ones++;
        else
            zeros++;
    }
    if(min(ones,zeros)&1){
        cout<<"Zlatan"<<'\n';
    }else{
        cout<<"Ramos"<<'\n';
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}