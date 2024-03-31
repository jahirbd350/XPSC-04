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
        int a[n][n-1];
        for(int i=0; i<n; i++){
            for(int j=0; j<n-1; j++){
                cin>>a[i][j];
            }
        }
        map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[a[i][0]]++;
        }
        int b,c;
        for(auto x:mp){
            //cout<<x.first<<" "<<x.second<<endl;
            if(x.second == 1)
                b = x.first;
            else
                c = x.first;
        }
        //cout<<b<<" "<<c<<endl;
        int pos;
        for(int i=0; i<n; i++){
            if(a[i][0] == b)
                pos = i;
        }
        cout<<c<<" ";
        for(int i=0; i<n-1; i++)
            cout<<a[pos][i]<<" ";
        cout<<endl;

    }
    
    return 0;
}