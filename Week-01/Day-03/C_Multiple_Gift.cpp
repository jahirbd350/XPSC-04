#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll x,y;
    cin>>x>>y;
    ll cnt = 0;
    ll sum = x;
    while(sum<=y){
        cnt++;
        sum *=2;
    }
    cout<<cnt<<endl;
    return 0;
}