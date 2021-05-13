//Constraints : 2<=n<=100 , c[i] belongs to {1,0} , c[0]==c[n-1]=0

#include <bits/stdc++.h>
using namespace std;
int jumpingOnClouds(vector<int> c) {
    int ans=0;
    for(int i=0; i<c.size();){
        if(c[i+2]==0){
            ans++; i+=2;
        }
        else if(c[i+1]==0){
            ans++; i+=1;
        }
        if(i==c.size()-1){
            break;
        }
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n; cin>>n; int ans=0;
    vector<int>A(n);
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    ans=jumpingOnClouds(A);
    cout<<ans<<endl;
    return 0;
}
