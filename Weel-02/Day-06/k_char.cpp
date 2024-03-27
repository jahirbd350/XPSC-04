//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        int f[26] = {0};
        int cnt = 0;
        int l=0, r=0, ans=-1;
        while(r<s.length()){
            f[s[r]-97]++;
            r++;
        }
        r=0;
        while(r<s.length()){
            if(f[s[r]-97]>0)
                cout<<f[s[r]-97]<<" ";
            r++;
        }
         
        // while(r<s.length()){
        //     if(f[s[r]-97]>0){
        //         f[s[r]-97]++;
        //     }else{
        //         f[s[r]-97]++;
        //         cnt++;
        //     }
        //     if(cnt == 3){
        //         while(cnt==3){
        //             r++;
        //             if(f[s[r]-97]>0){
        //                 f[s[r]-97]++;
        //             }else{
        //                 f[s[r]-97]++;
        //                 cnt++;
        //             }
        //             if(cnt>3)
        //                 break;
        //         }
        //         ans = max(ans, r-l);
        //     }
        //     if(cnt>3){
        //         f[s[l]-97]--;
        //         if(f[s[l]-97] == 0)
        //             cnt--;
        //         l++;
        //     }
        //     r++;
        // }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends