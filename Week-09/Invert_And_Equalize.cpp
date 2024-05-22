#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ones = 0;
    int zeros = 0;
    char last = s[0];
    if(last == '0'){
        zeros++;
        //last = s[i];
    }else{
        ones++;
    }
    for(int i=1; i<n; i++){
        if(s[i] != last){
            last = s[i];
            if(last == '0'){
                zeros++;
                //last = s[i];
            }else{
                ones++;
            }
        }
    }//cout<<endl;
    //cout<<last<<" "<<s[n-1]<<endl;
    //cout<<zeros<<" "<<ones<<endl;
    cout<<min(zeros,ones)<<endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}