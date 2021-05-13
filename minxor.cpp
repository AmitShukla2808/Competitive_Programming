//Constraints: 1<=n<=10^6
//Time Complexity: O(nlog(n))
//Algorithm: Minimum xor value is given when bits of numbers are nearly same. As consecutive or less
//           difference numbers have much similar bits they have the chance to have minimum xor value,
//           hence the solution.

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n; 
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter the elements in the vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    sort(A.begin(), A.end());
    int minxor=INT_MAX;
    for(int i=1; i<A.size(); i++){
        minxor = min(minxor,A[i]^A[i-1]);
    }
    cout<<"The minimum xor value is : "<<minxor<<endl;
    return 0;
}
