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
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cout<<a[i]<<" ";
        cout<<endl;
        int l[n];
        string s[n];
        cin.ignore();
        for(int i=0; i<n; i++){
            //cin.ignore();
            cin>>l[i];
            cin>>s[i];
        }
        for(int i=0; i<n; i++){
            cout<<l[i]<<" "s[i]<<endl;
        }

    }
    
    return 0;
}