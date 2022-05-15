// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&v, int n)
    {   
        unordered_map<int,int> u;
        int mx = 0,sum = 0;
        for(int i = 0;i<n;i++){
            sum+=v[i];
            if(sum == 0){
                mx = i+1;
            }
            if(u.find(sum)==u.end()){
                u[sum]=i;
            }
            if(u.find(sum)!=u.end()){
                mx = max(mx,i-u[sum]);
            }
        }
        return mx;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends