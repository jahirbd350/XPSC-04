#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; 
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    int l=0, r=0;

    while (r<m || l<n){
           if(r==m || l<n && a[l] < b[r]) {
            cout<<a[l]<<" ";
            l++;
        }
        else {
            cout<<b[r]<<" ";
            r++;
        }

    }
    return 0;
}