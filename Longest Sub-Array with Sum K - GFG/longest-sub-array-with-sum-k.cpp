// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int sum = 0,maxlength = 0;
        unordered_map<int,int> umap;
        for(int i = 0;i < N;i++){
            sum+=A[i];
            if(sum == K){
                maxlength = i+1;
            }
            if(umap.find(sum-K)!=umap.end()){
                maxlength = max(maxlength,i - umap[sum-K]);
            }
            if(umap.find(sum)==umap.end()){
                umap[sum] = i;
            }
        }
     return maxlength;
    } 

};

// { Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends