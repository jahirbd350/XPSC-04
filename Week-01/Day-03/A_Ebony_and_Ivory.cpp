#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=a; i<=max(c,a); i +=a){
        for(int j=b; j<=max(c,b); j+=b){
            if(i==c || j==c || i+j ==c){
                cout<<"Yes"<<'\n';
                return 0;
            }
        }
    }
    cout<<"No"<<'\n';
    return 0;
}