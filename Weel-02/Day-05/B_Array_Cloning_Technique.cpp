#include<bits/stdc++.h>
#define ll long long
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
        for(ll i=0; i<n; i++) cin>>a[i];

        set<ll> st;
        for(ll i=0; i<n; i++){
            st.insert(a[i]);
        }
        cout<<st.size()<<endl;
    }
    
    return 0;
}