#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,s;
    cin>>n>>s;
    ll a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    ll l=0, r=0, sum=0, ans =LLONG_MAX;

    while (r<n)
    {
        sum += a[r];
        cout<<sum<<endl;
        if(sum >= s){
            cout<<r-l+1<<endl;
            //ans = min(ans, r-l+1);
            while (sum >=s)
            {
                sum -= a[l];
                l++;
                /* code */
            }
            
        }else{
            //sum -= a[l];
            //l++;
        }
        r++;
    }
    //cout<<ans<<'\n';
    
    return 0;
}