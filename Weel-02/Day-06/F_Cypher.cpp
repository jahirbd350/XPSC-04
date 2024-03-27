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
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        
        int l[n];        
        for(int i=0; i<n; i++){
            cin>>l[i];
            char ch;
            for(int j=0; j<l[i]; j++){
                cin>>ch;
                if(ch == 'D'){
                    if(a[i] == 9)
                        a[i] = 0;
                    else
                        a[i]++;
                }else{
                    if(a[i] == 0)
                        a[i] = 9;
                    else
                        a[i]--;
                }
            }
        }
        for(int i=0; i<n; i++)  cout<<a[i]<<" ";
        cout<<endl;
    }
    
    return 0;
}