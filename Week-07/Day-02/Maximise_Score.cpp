#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        if(i==0){
            ans = abs(a[i] - a[i+1]);
        }else if(i==n-1){
            ans = min(ans, abs(a[i]-a[i-1]));
        }else{
            ans = min(ans, max(abs(a[i]-a[i-1]),abs(a[i] - a[i+1])));
        }
    }
    cout<<ans<<'\n';
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