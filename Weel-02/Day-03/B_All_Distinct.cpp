#include<bits/stdc++.h>
#define ll long long;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int a[n];
        int cnt =0;
        int rpt =0;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);
        for(int i=1; i<n; i++){
            if(a[i] == a[i-1]){
                rpt++;
            }
        }
        if(rpt%2 == 0)
            cout<<n-rpt<<endl;
        else
            cout<<n-rpt-1<<endl;
    }
    
    return 0;
}