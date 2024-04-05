#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int l=0, r=k;
        int ans =0;
        while(r<=n){
            bool flag = false;
            for(int i=l; i<r; i++){
                if((a[i]%2) !=0){
                    flag = true;
                    break;
                }
            }
            l++;
            r++;
            if(flag)
                ans++;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}