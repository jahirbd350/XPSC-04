#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,s;
    cin>>n>>s;
    ll a[n];
    for(ll i=0; i<n; i++) cin>>a[i];

    ll l=0, r=0, sum=0, ans =0;
    multiset<ll> ml;
    while(r<n){
        ml.insert(a[r]);
        ll mx = *ml.rbegin();
        ll mn = *ml.begin();
        if((mx-mn)<=s){
            ans += r-l+1;
        }else{
            while (l<r)
            {
                mx = *ml.rbegin();
                mn = *ml.begin();
                if(mx-mn <=s){
                    break;
                }
                auto it = ml.find(a[l]);
                ml.erase(it);
                l++;
            }
            mx = *ml.rbegin();
            mn = *ml.begin();
            if(mx-mn <=s){
                ans += r-l+1;
            }            
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}