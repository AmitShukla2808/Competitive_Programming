//Constraints: 1<=t<=100, 1<=m,n<=10^5, 0<=A[i]<=2, 1<=B[i]<=n
//Time Complexity: O(n+m)

#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int>A,vector<int>B){
    vector<int>ans; int r=-1,l=-1; vector<int>check(A.size(),-1); 
    vector<int>right(A.size(),-1),left(A.size(),-1);
    for(int i=0; i<A.size(); i++){
        if(A[i]==1){
            right[i]=i;
            r=i;
        }
        else{
            right[i]=r;
        }
    }
    for(int i=A.size()-1; i>=0; i--){
        if(A[i]==2){
            left[i]=i;
            l=i;
        }
        else{
            left[i]=l;
        }
    }
    for(int i=0; i<B.size(); i++){
        int pos=B[i]-1;
        if(pos==0){
            ans.push_back(0);
        }
        else if(left[pos]==-1 && right[pos]==-1){
            ans.push_back(-1);
        }
        else if(left[pos]==-1 && right[pos]!=-1){
            ans.push_back(abs(right[pos]-pos));
        }
        else if(left[pos]!=1 && right[pos]==-1){
            ans.push_back(abs(left[pos]-pos));
        }
        else{
            ans.push_back(min(abs(right[pos]-pos),abs(left[pos]-pos)));
        }
        
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>A(n); vector<int>B(m);
        for(int i=0; i<n; i++){
            cin>>A[i];
        }
        for(int i=0; i<m; i++){
            cin>>B[i];
        }
        vector<int>ans(m);
        ans = solve(A,B);
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
