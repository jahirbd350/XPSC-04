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
        ll n,b;
        cin>>n>>b;
        ll a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        ll sum = -1;
        for(int i=0; i<n; i++){
            if((a[i] & b) == b)
                sum &= a[i];
        }
        if(sum == b)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
    }
    
    return 0;
}