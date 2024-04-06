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
        lpi;
        ll ans = 0;
        map<ll,ll> mp;

        for(int i=0; i<n;i++){
            int msb =0;
            while(a[i]>0){
                a[i] >>=1;
                msb++;
            }
            //cout<<msb<<" ";
            if(mp.count(msb-1) > 0)
                ans += mp[msb-1];
           
            mp[msb-1]++;
            
        }
        //cout<<endl;
        cout<<ans<<endl;
    }
    
    return 0;
}