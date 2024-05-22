#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n>>x;
    int a[n];
    pair<int,int> pr[n];
    for(int i=0; i<n; i++){
        cin>>pr[i].first;
        pr[i].second = i;
    }
    sort(pr, pr+n);
    for(int i=0; i<n; i++){
        //cout<<pr[i].first<<" "<<pr[i].second<<endl;
        int l=i+1, r= n-1;
        while(l<r){
            if(x-pr[i].first == pr[l].first + pr[r].first){
                cout<<pr[i].second+1<<" "<<pr[l].second+1<<" "<<pr[r].second+1<<endl;
                return 0;
            }else if(x-pr[i].first > pr[l].first + pr[r].first){
                l++;
            }else{
                r--;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;


    return 0;
}