#include <bits/stdc++.h>
using namespace std; 
int main(){
    int n; cin>>n; vector<int>A(n); unsigned int su;
    for(int i=0; i<n; ++i){
        cin>>A[i];
    }
    for(int i=0; i<n; ++i){
        su+= A[i];
    }
    cout<<su<<endl;
}