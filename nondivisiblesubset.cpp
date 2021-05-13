// Constraints : 1<=n<=10^5 ,  1<=k<=100 , 1<=S[i]<=10^9

#include<bits/stdc++.h>
using namespace std;
int nonDivisibleSubset(int k, vector<int> s) {
    vector<int>B(k); int sum=0;
    for(int i=0; i<s.size(); i++){
        B[s[i]%k]++;
    } 
    if(B[0]>1){
        B[0]=1;
    }
    if(B[k/2]>1 && k%2==0){
        B[k/2]=1;
    }
    for(int i=1; i<=k/2; i++){
        sum+=max(B[i],B[k-i]);
    }
    sum+=B[0];
    return sum;
}
int main(int argc, char const *argv[])
{
    int n,k; cin>>n>>k;
    vector<int>A(n);
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int ans=0; 
    ans=nonDivisibleSubset(k,A);
    cout<<ans<<endl;
    return 0;
}

