#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n; 
    cin >> n;
    string s[n];
    for(ll i=0; i<n; i++) {
        cin>>s[i];
    }

    map<string, ll> mp;
    string ans = "";

    for(ll i= n-1; i>=0; i--) {
        if(mp.count(s[i])> 0)
            continue;
        else {
            ans += s[i].substr(s[i].length()-2,2);
            mp[s[i]]++;
        }
    }

    cout << ans;
    
    return 0;
}