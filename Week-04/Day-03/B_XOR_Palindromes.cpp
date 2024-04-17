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
        ll n;
        cin>>n;
        string s1;
        cin>>s1;
        int odds = 0;
        for(int i=0, j=n-1; i<j; i++,j--){
            if(s1[i] != s1[j])
                odds++;
        }
        if(n&1){
            for(int i=0; i<=n; i++){
                if(i<odds || i>(n-odds))
                    cout<<0;
                else
                    cout<<1;
            }
        }else{
            for(int i=0; i<=n; i++){
                if(i>=odds && i<=(n-odds) && !((i-odds)&1))
                    cout<<1;
                else
                    cout<<0;
            }
        }
        cout<<endl;
        
        //cout<<odds<<" "<<pairs<<endl;
    }
    
    return 0;
}