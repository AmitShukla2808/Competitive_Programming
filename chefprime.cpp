// Constraints : 1<=t,n<=200
// Time Complexity : O(1)

#include <bits/stdc++.h>
using namespace std;
int main() {
	int w=0; //flag for checking if condition has been satisfied atleast once
	int t; cin>>t; 
    vector<int>A={6, 10, 14, 15, 21, 22,26, 33, 34,35, 38, 39, 46, 51, 55, 57,
    58, 62, 65, 69, 74, 77, 82, 85, 86,87, 91, 93, 94, 95, 106, 111, 115, 118,
    119, 122, 123, 129, 133, 134, 141, 142, 143, 145, 146, 155, 158, 159, 161,
    166,177, 178, 183, 185, 187, 194};  // Preprocessed semi primes upto 200	
    while(t--){
	    int n; cin>>n; w=0;
	    for(int i=0; i<A.size(); i++){
	        for(int j=0; j<A.size(); j++){
	            if(A[i]+A[j]==n){
	                 w=1; break;
	            }
	        }
            if(w==1){
                break;
            }
	    }
	    if(w==1){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}