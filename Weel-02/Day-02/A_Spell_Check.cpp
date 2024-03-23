#include<bits/stdc++.h>
#define ll long long;
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
        sort(s.begin(), s.end());
        if(s != "Timru")
            cout<<"NO"<<'\n';
        else
            cout<<"YES"<<'\n';
    }
    
    return 0;
}