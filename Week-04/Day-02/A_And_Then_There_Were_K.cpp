#include<bits/stdc++.h>
#define ll long long
#define lpi for(int i=0; i<n; i++) cin>>a[i]
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll msb =0;
        while(n>0){
            n >>=1;
            msb++;
        }
        cout<<(1<<msb-1)-1<<endl;
    }
    
    return 0;
}