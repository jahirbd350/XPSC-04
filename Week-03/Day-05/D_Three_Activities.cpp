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
        int m[3][n];

        pair<ll,ll> a[n],b[n],c[n];

        for(int i=0; i<n; i++){
            cin>>a[i].first;
            a[i].second = i;
        }

        for(int i=0; i<n; i++){
            cin>>b[i].first;
            b[i].second = i;
        }

        for(int i=0; i<n; i++){
            cin>>c[i].first;
            c[i].second = i;
        }

        sort(a, a+n);
        sort(b, b+n);
        sort(c, c+n);

        ll ans = -1;

        for(int i=n-1; i>n-4; i--){
            for(int j=n-1; j>n-4; j--){
                for(int k=n-1; k>n-4; k--){
                    if(a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second){
                        ans = max(ans, a[i].first + b[j].first + c[k].first);
                    }
                }
            }
        }

        cout<<ans<<endl;


    }
    
    return 0;
}