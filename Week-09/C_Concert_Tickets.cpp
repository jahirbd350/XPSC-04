#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    multiset<int> h[n];
    int t[m];
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        h->insert(x);
    }
    for(int i=0; i<m; i++){
        cin>>t[i];
    }
    for(int i=0; i<m; i++){
        auto it = h->upper_bound(t[i]);
        if(it == h->begin()){
            cout<<-1<<endl;
        }else{
            //int x = *advance(it,-1);
            cout<<*--it<<endl;
            h->erase(it);
        }
    }

    return 0;
}