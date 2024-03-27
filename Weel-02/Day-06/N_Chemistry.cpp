#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k; 
        cin>>n>>k;
        string s;
        cin>>s;
        map<char, int> mp;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        //cout<<mp.size()<<endl;
        cout<<n/2<<endl;
        if(mp.size()-k < n/2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}