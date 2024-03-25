#include<bits/stdc++.h>
#define ll long long;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        string s[n];
        for(int i=0; i<n; i++) cin>>s[i];
        int cnt[n] = {0};
        int mn = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cnt[i] += s[i][j]-97;
            }
        }
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(cnt[i]-cnt[j]>=0)
                    mn = min(mn, cnt[i] - cnt[j]);
            }
        }
        cout<<mn<<endl;
    }
    
    return 0;
}