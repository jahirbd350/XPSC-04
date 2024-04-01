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
        ll n,k,q;
        cin>>n>>k>>q;
        ll a[n];
        lpi;
        ll cnt=0;
        ll ans =0;
        for(int i=0; i<n; i++){
            if(a[i] <= q){
                cnt++;
            }else{
                if (cnt >= k) {
                    ans += ((cnt - k + 1) * (cnt - k + 2)) / 2;
                }
                cnt = 0;
            }
        }
        if (cnt >= k) {
            ans += ((cnt - k + 1) * (cnt - k + 2)) / 2;
        }
        cnt = 0;
        cout<<ans<<endl;
    }
    
    return 0;
}