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
        cin >> n;
        int a[n];
        bool nw = false;
        int ans = 0;
        long long sum = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
            if(a[i] <0 && !nw)
            {
                ans++;
                nw = true;
            }
            if(a[i] > 0 && nw)
            {
                nw = false;
            }
        }
        
        cout << sum <<" "<< ans << '\n';

    }
    
    return 0;
}