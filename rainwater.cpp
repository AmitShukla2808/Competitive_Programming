#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> A){
    int i, n = A.size(),ma=INT_MIN,ans=0,tmp=0;
    vector<int> left(n,0), right(n,0);
    // for left 
    ma=A[0];
    left[0]=0;
    for(i=1;i<n;++i){
        left[i]=ma;
        ma=max(ma,A[i]);
    }
    // for right
    ma=A[n-1];
    right[n-1]=0;
    for(i=n-2;i>=0;--i){
        right[i]=ma;
        ma=max(ma,A[i]);
    }
    // final computatio for all buildings
    for(i=0;i<n;++i){
        tmp=min(left[i],right[i]);
        if (tmp > A[i]){
            ans+=(tmp-A[i]);
        }
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    vector<int> A = {0,1,0,2,1,0,1,3,2,1,2,1};
    int ans = solve(A);
    cout<<"The amount of water trapped is "<<ans<<" units"<<endl;
    return 0;
}
