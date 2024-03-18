#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        map<string,int> freq;
        vector<vector<string>> s(n, vector<string>(3));
        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                cin>>s[j][i];
               freq[s[j][i]]++;
            }
        }
        int track[3] = {0};
        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                if(freq[s[j][i]]==1){
                    track[i] +=3;
                }else if(freq[s[j][i]]==2){
                    track[i] +=1;
                }
            }
            
        }
        cout<<track[0]<<" "<<track[1]<<" "<<track[2]<<'\n';
        freq.clear();
    }
    
    return 0;
}