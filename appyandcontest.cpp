//Constraints : 1<=t<=15 , 1<=n,k<=10^18 , 1<=a,b<=10^9
//Time Complexity : O(t*log2n)   where log2n is the complexity of gcd function in c++ using Euclidean
// method

#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	   unsigned long long int n,k; unsigned long long  int a,b; cin>>n>>a>>b>>k;
	   unsigned long long int lcm=0;  unsigned long long  int count=0;
	   lcm=(a*b)/__gcd(a,b);                    // calculating the lowest common multiple of a and b
	   count=(n/a)+(n/b)-(2*(n/lcm));           // adding no. of multiples of a and b and subtracting 
	    if(count>=k){                           // lcm and the no. of its multiples
	        cout<<"Win"<<endl;
	    }
	    else{
	        cout<<"Lose"<<endl; 
	    }
	}
	return 0;
}