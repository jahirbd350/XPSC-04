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
        int res = n;
        int ans = 0;
        for(int i=n-1; i>=1; i--){
            //cout<<res<<" ";
            if(res == 0){
                ans = i;
                break;
            }else{
                res &= i;
            }
        }
        cout<<ans+1<<endl;
    }
    
    return 0;
}