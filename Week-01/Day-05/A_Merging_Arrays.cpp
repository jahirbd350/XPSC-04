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
    while (r<m){
       while (b[r] >= a[l] && l < n) {
            cout << a[l] << " ";
            l++;    
        }
        cout << b[r] << " ";
        r++;     
    }
    return 0;
}