#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n>>x;
    int a[n];
    int l=0;
    int sum = 0;
    int ans = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum += a[i];
        while(sum > x){
            sum -= a[l++];
        }
        if (sum == x){
            ans++;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}