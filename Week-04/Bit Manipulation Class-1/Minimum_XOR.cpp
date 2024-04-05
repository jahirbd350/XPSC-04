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
	    int arr[n];
	    int a=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        a=a^arr[i];
	    }
	    int res=a;
	    for(int i=0;i<n;i++)
	    {
	        int x=a^arr[i];
	        res=min(res,x);
	    }
	    cout<<res<<endl;
    }
    
    return 0;
}