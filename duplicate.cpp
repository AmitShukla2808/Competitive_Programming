#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n; cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter the elements in array"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    sort(A.begin(),A.end()); int a=0;  a=A[0];
    for(int i=1; i<A.size();){
        if(A[i]==a){
            A.erase(A.begin()+i);
            continue;
        }
        else{
            a=A[i];
        }
        ++i;
    }
    for(int i=0; i<A.size(); i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}
