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
        int n;
        cin>>n;
        int a[n];
        int mn = INT_MAX, mx = INT_MIN;
        int ans = -1;
        for(int i=0; i<n; i++)
        {
            cin>> a[i];
            if(mn > a[i]) mn = a[i];
            if(mx < a[i]) mx = a[i];
        }
        
        ans = max(ans, a[n-1] - a[0]);
        ans = max(ans, mx - a[0]);
        ans = max(ans, a[n-1] - mn);
        
        for(int i=0; i<n-1; i++)
        {
            ans = max(ans, a[i]-a[i+1]);
        }
        cout << ans << '\n';
        
    }
    
    return 0;
}