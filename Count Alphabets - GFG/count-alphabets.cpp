// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int Count(string S);


int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        cout << Count(S) << endl;
    }
return 0;
}

// } Driver Code Ends


int Count(string S){
    unordered_map<char,int> u;
    for(int i = 0; i < S.size();i++){
        u[S[i]]++;
    }
    int i = 0;
    for(auto x:u){
        if(x.first>=1 && (x.first >='a' || x.first >='A')&&(x.first <='z' || x.first <='Z') ){
        i = i + x.second;
        }
    }
    return i;
}