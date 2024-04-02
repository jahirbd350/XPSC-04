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
        ll n,q;
        cin>>n>>q;
        ll a[n];
        lpi;
        while(q--){
            ll b,c;
            cin>>b>>c;
            int x=-1,y=-1;
            for(int i=0; i<n; i++){
                if(a[i] == b)
                    x = i;
                if(a[i] == c)
                    y = i;
                
                if(y>x && x != -1)
                    break;
            }
            //cout<<y<<" "<<x<<" ";
            if(y>x && x != -1)
                cout<<"YES"<<'\n';
            else
                cout<<"NO"<<'\n';
        }

    }
    
    return 0;
}