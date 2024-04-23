#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,n,s;
        cin>>a>>b>>n>>s;

        int res = min(s/n,a);
        s -= res*n;
        if(s<=b)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
    }
    
}