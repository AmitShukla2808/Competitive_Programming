//Constraints: 1<=t<=1000, 1<=side<=10000
//Time Complexity: O(t*1) as t is small we can take complexity as O(1*1) = O(1)
// Given as isosceles right angled triangle find the number of 2X2 squares that can fit in 
// square with base parallel to side/base of triangle 

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
    cout<<"Enter the number of test cases"<<endl;
	cin>>t;
	while(t--){
        cout<<"Enter the base of triangle"<<endl;

	    int side,squares=0;
	    cin>>side;
	    int n=side/2;
	    n-=1;
        cout<<"The number of squares that can fit in are : ";
	    if(n>0){
	       squares=((n)*(n+1))/2;
	        cout<<squares<<endl;
	    }
	    else{
	        cout<<squares<<endl;
	    }
	}
	return 0;
}
