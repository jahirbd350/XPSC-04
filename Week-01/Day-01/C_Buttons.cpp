#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b && a-b>=2){
        cout<<2*a-1<<'\n';
    }else if(a>b && a-b == 1){
        cout<<a+b<<'\n';
    }else if(a == b){
        cout<<2*a<<'\n';
    }else if(b>a && b-a>=2){
        cout<<2*b-1<<'\n';
    }else if(b>a && b-a == 1){
        cout<<a+b<<'\n';
    }
    return 0;
}