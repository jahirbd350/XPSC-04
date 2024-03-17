#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    if(n<9){
        s = "000" + to_string(n);
    }else if(n<99 && n>9){
        s = "00" + to_string(n);
    }else if(n<999 && n>99){
        s = "0" + to_string(n);
    }else{
        s = to_string(n);
    }
    cout<<s<<'\n';
    return 0;
}