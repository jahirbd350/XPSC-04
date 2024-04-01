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
        map<ll,int> mp;
        for(int i=0; i<n; i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        sort(a, a+n);
        ll ans = 0;
        for(int i=0; i<n; i++){
            if(mp[a[i]] > 0){
                ans++;
                ll val = a[i];
                while (mp[val]>0)
                {
                    mp[val]--;
                    val++;
                }                
            }
        }
        cout<<ans<<endl;


    }
    
    return 0;
}