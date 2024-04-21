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
        string s;
        cin>>s;
        string ans = "";
        for(int i=n-1; i>=0;){
            if(s[i] == '0'){
                //ans = char(stoi(s.substr(i-1,2)))+ans;
                ans += 96+stoi(s.substr(i-2,2));
                i -=3;
            }else{
                ans += 96+stoi(s.substr(i,1));
                i--;
            }
        }
        reverse(ans.begin(), ans.end());
        cout<<ans<<'\n';
    }
    
    return 0;
}