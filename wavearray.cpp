#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n; 
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the the elements in array"<<endl;
    vector<int>A(n);
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    sort(A.begin(),A.end()); int temp;
    for(int i=0; i<n-1; i+=2){
        temp=A[i];
        A[i]=A[i+1];
        A[i+1]=temp;
    }
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}
