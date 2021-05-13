#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n; 
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int> A(n);
    cout<<"Enter the elements in vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    cout<<"Sum of each subarray is : "<<endl; int calsum=0;
    for(int i=0; i<n; i++){
        cout<<"Subarray starting from "<<i<<" index : ";
        for(int j=i; j<n; j++){
            calsum+=A[j];
            cout<<calsum<<" ";
        }
        calsum=0;
        cout<<endl;
    }
    return 0;
}
