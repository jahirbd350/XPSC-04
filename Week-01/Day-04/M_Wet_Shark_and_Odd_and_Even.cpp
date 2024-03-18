#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll minodd=LLONG_MAX;
    ll sum = 0;
    for(ll i=0; i<n; i++){
        cin>>v[i];
        sum += v[i];
        if(v[i] %2 !=0){
            minodd = min(minodd,v[i]);
        }
    }
    if(sum % 2 == 0){
        cout<<sum<<endl;
    }else{
        cout<<sum-minodd<<endl;
    }

    return 0;
}