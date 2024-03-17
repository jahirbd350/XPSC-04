#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int f[26] = {0};
    for(int i=0; i<s.length(); i++){
        f[s[i]-97]++;
    }
    for(int i=0; i<26; i++){
        if(f[i] == 0){
            cout<<char(i+'a')<<endl;
            return 0;
        }
    }
    cout<<"None"<<endl;
    return 0;
}