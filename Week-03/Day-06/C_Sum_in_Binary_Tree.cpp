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

        ll sum = 0;
        while(n>=1){
            sum += n;
            n /=2;
        }
        cout<<sum<<endl;
    }
    
    return 0;
}