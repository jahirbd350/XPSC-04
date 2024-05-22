#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a,b,k;
    cin>>a>>b>>k;
    ll ans = 0;
    if(a>(b/k)){
        cout<<b-a<<endl;
    }else{
        ll x = b/k;
        ans++;
        x =  x-a;
        ans++;
        while (x>1)
        {
            //cout<<x<<" ";
            x /= k;
            ans++;
        }

        cout<<ans<<endl;
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