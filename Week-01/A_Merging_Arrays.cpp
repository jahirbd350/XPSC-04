#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    vector<int> ans(n+m);
    for(int i=0; i<n || i<m; i++){
        if(a[i]<b[i]){
            ans.push_back(a[i]);
            ans.push_back(b[i]);
        }
    }
    return 0;
}