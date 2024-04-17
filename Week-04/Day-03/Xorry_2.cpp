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
        cin >> n;
        ll s = 1;
        while (s <= n) s *= 2;
        bool ok = false;
        ll zeros = 0;
        s = (s>>2);
        while(s>0)
        {
            if((n & s)==s && !ok) ok=true;
            if((n & s)==0 && ok) zeros++;
            s = (s>>1);
        }
        
        ll ans=1;
        while(zeros--) ans*=2;
        cout<<ans<<'\n';
    }
    
    return 0;
}