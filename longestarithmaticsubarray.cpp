// Arithmatic array is an array in which consecutive elements follow A.P

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n; 
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int> A(n);
    cout<<"Enter elements in vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int pd=A[1]-A[0]; int maxlen=2; int currlen=2; 
    for(int i=2; i<n; i++){
        if(pd==A[i]-A[i-1]){
            currlen++;
        }
        else{
            currlen=2; pd=A[i]-A[i-1];
        }
        maxlen = max(maxlen,currlen);
    }
    cout<<"The length of longest arithematic subarray is : "<<maxlen<<endl;
    return 0;
}
