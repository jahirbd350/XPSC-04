#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    int d = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            cout << "NO" << '\n';
            return;
        }
        d = max(d, a[i] - b[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] - b[i] < d && b[i] != 0)
        {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}