#include<bits/stdc++.h>
#define ll long long
#define lpi for(int i=0; i<n; i++) cin>>a[i]
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        //cout<<s1<<" "<<s2<<endl;
        if(s1[s1.length()-1] == s2[s2.length()-1]){
            if(s1[s1.length()-1] == 'S'){
                if(s1.length() < s2.length())
                    cout<<">"<<endl;
                else if(s1.length() == s2.length())
                    cout<<"="<<endl;
                else
                    cout<<"<"<<endl;
            }else {
                if(s1.length() > s2.length())
                    cout<<">"<<endl;
                else if(s1.length() == s2.length())
                    cout<<"="<<endl;
                else
                    cout<<"<"<<endl;
            }
            //cout<<"YES"<<endl;
        }else{
            if(s1[s1.length()-1] < s2[s2.length()-1])
                cout<<">"<<endl;
            else
                cout<<"<"<<endl;
        }
    }
    
    return 0;
}