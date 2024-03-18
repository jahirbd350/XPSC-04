#include<bits/stdc++.h>
#define ll long long;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n+1);
        int op =0;
        for(int i=1; i<=n; i++){
            cin>>a[i];
            if(a[i]>i+op){
                //cout<<op<<" ";
                op += (a[i]-i-op);
            }
        }
        cout<<op<<endl;
    }
    
    return 0;
}