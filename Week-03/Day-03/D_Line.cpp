#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;

        ll sum =0;
        for(int i=0; i<n; i++){
            if(i<n/2){
                if(s[i] == 'L'){
                    sum += i;
                }else{
                    sum += n-1-i;
                }
            }else{
                if(s[i] == 'R'){
                    sum += n-i-1;
                }else{
                    sum += i;
                }
            }
        }
        for(int i=0; i<n; i++){
            ll ans = sum;
            int l=0, r=n-1;
            if(l==i)
                continue;
            while(l<=r){
                if(s[l] == 'L'){
                    ans -= l;
                    ans += n-1-l;
                    l++;
                }else if(s[r] == 'R'){
                    ans -= n-1-r;
                    ans += n-1-l;
                    r--;
                }else{
                    l++;
                    r--;
                }
            }
            cout<<ans<<" ";

        }
        // for(int i=0,j=n-1; i<j; i++,j--){
        //     ll ans = sum;

        //     if(s[i] == 'L'){
        //         ans -= i;
        //         ans += n-1-i;
        //         //sum += i;
        //     }else if(s[j] == 'R'){
        //         ans -= n-1-i;
        //         ans += i;
        //     }
        //     cout<<ans<<" ";            
        // }
        cout<<endl;
    }
    
    return 0;
}