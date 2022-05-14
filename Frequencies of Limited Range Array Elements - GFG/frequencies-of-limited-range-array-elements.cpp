// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // unordered_map<int,int> u;
        // for(int i = 0;i < arr.size();i++){
        //     u[arr[i]]++;
        // }
        // for(int i = 0;i < N;i++){
        //     if(u.find(i+1)==u.end())arr[i]=0;
        // }
        // for(auto x:u){
        //     arr[x.first-1] =  x.second;
        // }
        int temp[P]={0};
        for(int i = 0;i < N;i++){
            temp[arr[i]-1]++;
        }
        for(int i = 0;i < N;i++){
            if(i<P){
                arr[i]= temp[i];
            }
            else{
                arr[i]=0;
            }
        }
    }   
};


// { Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}




  // } Driver Code Ends