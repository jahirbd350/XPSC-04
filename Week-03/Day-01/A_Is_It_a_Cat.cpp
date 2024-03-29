#include<bits/stdc++.h>
#define ll long long
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
        vector<char> v;
        for(int i=0; i<n; i++){
            v.push_back(tolower(s[i]));
        }
        auto it = unique(v.begin(),v.end());

        v.resize(distance(v.begin(), it));
        string ans;
        for(int i=0; i<v.size(); i++){
            ans += v[i];
        }

        if(ans == "meow"){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}