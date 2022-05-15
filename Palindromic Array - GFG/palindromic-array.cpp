// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:

int checkp(int n){
    string s = to_string(n);
    int flag = 0;
    for(int i = 0;i < s.size()/2;i++){
        if(s[i] != s[s.size()-i-1]){
            return 0;
        }
    }
    return 1;
}

    int PalinArray(int a[], int n)
    {
    	for(int i = 0;i < n;i++){
    	if(!checkp(a[i]))return 0;
    	}
    	return 1;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends