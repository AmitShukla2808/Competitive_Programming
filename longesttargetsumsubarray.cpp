//Constraints: 1<=n<=10^5 , -10^6<=A[i]<=10^6 , -10^9<=S<=10^9
//Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> A, int B){
    int i,n=A.size(),su=0,maxlen=-1;
    unordered_map<int,int>mp;
    for(i=0; i<n; i++){
        su+=A[i];
        if(su==B){
            maxlen=i+1;
        }
        else{
            if(mp.find(su-B)!=mp.end()){
                maxlen=max(maxlen,i-mp[su-B]);
            }
            else{
                mp[su]=i;
            }
        }
    }
    return maxlen;
}
int longestsum(vector<int>A, int n, int S){
    unordered_map<int,vector<int>>mp;
    mp[S].push_back(0);
    int i=0;  int su=0; int k=0;
    for(i=0; i<n; i++){
        su+=A[i];
        if(A[i]==S){
            k=1;
        }
        else if(su==S){
            mp[S].push_back(i+1);
        }
        else{
            if(mp.find(su-S)!=mp.end() && su!=2*S){
                mp[su-S].push_back(i+1);
            }
            else{
                mp[su].push_back(i+1);
            }
        }
    }
    int maxlen=INT_MIN; int diff=0;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        if(it->second.size()>1){
            diff=it->second.back()-it->second[0];
            maxlen=max(maxlen,diff);
        }
    }
    if(k==1 && maxlen==INT_MIN){
        maxlen=k;
    }
    if(maxlen==INT_MIN){
        return -1;
    }
    else{
        return maxlen;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter the numbers in vector"<<endl;
    int i=0;
    for(i=0; i<n; i++){
        cin>>A[i];
    }
    int S;
    cout<<"Enter the target sum"<<endl;
    cin>>S;
    int ans = longestsum(A,n,S);
    int ans1= solve(A,S);
    if(ans==-1){
        cout<<"No such subarray exists"<<endl;
    }
    else{
        cout<<"The length of the longest subarray with sum equal to target sum : "<<ans<<endl;
    }
    if(ans1==-1){
        cout<<"No such subarray exists"<<endl;
    }
    else{
        cout<<"The length of the longest subarray with sum equal to target sum : "<<ans<<endl;
    }
    return 0;
}
