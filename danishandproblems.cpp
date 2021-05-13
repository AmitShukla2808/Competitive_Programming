#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long int t; 
    cin>>t;
    while(t--){
        vector<unsigned long int>A(10);
        for(int i=0; i<10; i++){
            cin>>A[i];
        }
        long long int k; 
        cin>>k;
        for(int i=9; i>=0;i--){
            k=k-A[i]; 
            if(k<0){
                cout<<(i+1)<<endl;
                break;
            }
        }
    }
    return 0;
}