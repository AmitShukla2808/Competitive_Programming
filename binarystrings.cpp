#include<bits/stdc++.h>
using namespace std;
void binary(vector<int>&A,int c,int n){
    if(c==n){
        for(int i=0; i<A.size(); i++){
            cout<<A[i];
        }
        cout<<endl; 
        return;
    }
    A.push_back(0);
    binary(A,c+1,n);
    A.pop_back();
    A.push_back(1);
    binary(A,c+1,n);
    A.pop_back();
    return;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the length of binary strings"<<endl;
    cin>>n; int c=0;
    vector<int>A;
    cout<<"Binary Strings are"<<endl;
    binary(A,c,n);
    return 0;
}
