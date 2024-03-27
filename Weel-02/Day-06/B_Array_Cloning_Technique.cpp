#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n; cin>>n;
        map<int,int> mp;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        int target =0, ans = 0;
        for(auto x:mp){
            target = max(target, x.second);
        }
        
        while(target<n){
            int need = n-target;
            ans = ans + 1 + min(need, target);
            target = target + min(need, target);
        }

        cout<<ans<<endl;
        
    }
    
    return 0;
}