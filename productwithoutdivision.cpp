// Find the product of all the numbers in an array except the number at its position itself

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements in vector"<<endl;
    cin>>n;
    vector<int> A(n,0);
    cout<<"Enter elements in the vector"<<endl;
    int i;
    for(i=0; i<n; i++){
        cin>>A[i];
    }
    vector<int> Left(n),Right(n);
    Left[0]=Right[n-1]=1;
    for(i=1; i<n; i++){
        Left[i]=Left[i-1]*A[i-1];
    }
    for(i=n-2; i>=0; i--){
        Right[i]=Right[i+1]*A[i+1];
    }
    cout<<"The Products are : ";
    for(i=0; i<n; i++){
        cout<<Left[i]*Right[i]<<" ";
    }
    cout<<endl;
    return 0;
}
