#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>A(n);
        for(int i=0; i<n; i++){
            cin>>A[i];
        }
        for(int i=0; i<n; i++){
            if(A[i]%2==0){
                cout<<A[i]<<" ";
            }
        }
        for(int i=0; i<n; i++){
            if(A[i]%2!=0){
                cout<<A[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}