#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    cout<<((x%3) + (y%3))/2<<endl;
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