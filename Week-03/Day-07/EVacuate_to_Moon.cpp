#include<bits/stdc++.h>
#define ll long long
#define lpi for(int i=0; i<n; i++) cin>>a[i]
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,m,h;
        cin>>n>>m>>h;
        ll a[n];
        ll b[m];
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<m; i++) cin>>b[i];
        sort(a,a+n, greater<int>());
        sort(b,b+m, greater<int>());
        ll ans = 0;
        for(int i=0; i<min(n,m); i++){
            ans += min(a[i], h*b[i]);
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}