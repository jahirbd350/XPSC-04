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
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int sum =0;
                for(int k=0; k<m; k++){
                    sum += abs(s[i][k] - s[j][k]);
                }
                mn = min(mn,sum);
            }
            //cout<<endl;
        }
        cout<<mn<<endl;
    }
    
    return 0;
}