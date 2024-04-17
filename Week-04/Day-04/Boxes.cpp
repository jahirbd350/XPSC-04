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
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n, greater<ll>());
        ll ans = 1;
        ll sum = a[0];
        for(int i=1; i<n; i++){
            if(sum >= a[i]){
                sum ^= a[i];
            }else{
                ans++;
                sum = a[i];
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}