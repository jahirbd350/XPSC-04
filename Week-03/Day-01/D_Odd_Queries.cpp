#include<bits/stdc++.h>
#define ll long long
#define lpi for(ll i=1; i<=n; i++) cin>>a[i]
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,q;
        cin>>n>>q;
        ll a[n+1]= {0};
        ll sum = 0;
        for(ll i=1; i<=n; i++){
            cin>>a[i];
            sum += a[i];
        }
            
        ll presum[n+1];
        presum[0] = 0;
        presum[1] = a[1];
        for(ll i = 2; i<=n; i++){
            presum[i] = presum[i-1]+a[i];
        }
        
        while (q--)
        {
            ll l,r,k;
            cin>>l>>r>>k;
            ll ans = ((sum - (presum[r] - presum[l-1])) + ((r-l+1)*k));
            //cout<<sum<<endl;
            if(ans %2 ==0)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    
    return 0;
}