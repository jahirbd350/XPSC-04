#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,s;
    cin>>n>>s;
    ll a[n];
    for(ll i=0; i<n; i++) cin>>a[i];

    ll l=0, r=0, sum=0, ans = 0;
    map<ll, int> mp;
    while (r<n)
    {
        mp[a[r]]++;
        while (mp.size() > s)
        {
            mp[a[l]]--;
            if(mp[a[l]] == 0)
                mp.erase(a[l]);
            l++;
        }
        
        ans += r-l+1;
        r++;
    }
    cout<<ans<<endl;
    
    return 0;
}