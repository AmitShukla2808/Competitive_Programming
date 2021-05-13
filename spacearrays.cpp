//Constraints: 1<=t<=2*10^4, 1<=N<=2*10^5
//Time Complexity: O(n*t)

#include<bits/stdc++.h>
using namespace std;
int main(){
    long int t; cin>>t;
    while(t--){
        long int N,ans=0; int k=0;
        cin>>N; vector<long int>A(N,0);
        for(int i=0; i<N; i++){
            cin>>A[i];
        }
        sort(A.begin(),A.end());
        for(int i=0; i<N; i++){
            if(A[i]>(i+1)){
                cout<<"Second"<<endl; k=1; break;
            }
            else{
                ans+=(i+1)-A[i];
            }
        }
        if(k==0){
            if(ans%2==0){
                cout<<"Second"<<endl;
            }
            else{
                cout<<"First"<<endl;
            }
        }
        k=0,ans=0;
    }
    return 0;
}