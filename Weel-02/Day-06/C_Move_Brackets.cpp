#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s;
        cin>>s;
        stack<char> st;
        for(int i=0; i<n; i++){
            if(st.empty()){
                st.push(s[i]);
            }else{
                if((s[i] == ')' && st.top() == '(')){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }
        }
        cout<<st.size()/2<<endl;
    }
    
    return 0;
}