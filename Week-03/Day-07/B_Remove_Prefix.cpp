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
        int a[n];
        map<int,int> mp;

        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=n-1; i>=0; i--){
            if(mp.count(a[i]) == 0){
                //cout<<a[i]<<endl;
                mp[a[i]]++;
            }else{
                break;
            }
        }
        cout<<n-mp.size()<<endl;
    }
    
    return 0;
}