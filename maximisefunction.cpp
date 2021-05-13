//Constraints : 1<=T<=5, 3<=N<=10^5, |Ai|<=10^9 for each valid i
//Time Complexity : O(t*n)  here t is compulsory for no. of test cases
//Max value of |Ax-Ay|+|Ay-Az|+|Az-Ax| 

#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t; cin>>t;long int ans=0; long int min=LONG_MAX; long int max=LONG_MIN;
	while(t--){
	    int n; cin>>n;  min=LONG_MAX;  max=LONG_MIN;
	    vector<long int>A(n);
	    for(int i=0; i<n; i++){
	        cin>>A[i];
	    }
	    for(int i=0; i<n; i++){
	        if(min>A[i]){
	            min=A[i];         // calculating the minimum value in vector
	        }
	        if(max<A[i]){
	            max=A[i];        //  calculating the maximum value in vector
	        }
	    }
	    ans=2*abs(max-min);
	    cout<<ans<<endl;
	}
	return 0;
}