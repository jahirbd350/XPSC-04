#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool binarySearch(ll a[], ll n, ll k){
    int l = 0, r = n - 1, mid, idx = -1;
    while (l <= r) {
        mid = (l + r) / 2;
        if (k == a[mid]) {
            idx = mid;
            break;
        }
        else if (k < a[mid]) {
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

    if (idx == -1)
        return false;
    else
        return true;
}

int main(){
    ll n,k;
    cin>>n>>k;
    ll a[n];
    ll b[k];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<k; i++){
        ll key; 
        cin>>key;
        if(binarySearch(a, n, key))
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
    }
    
}