//Constraints: 1<=n<=10^6, 1<=A[i]<=10^9
//Time Complexity: O(n)
//Find minimum distance between any two occurences of same element.

#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>A){
    map<int,int>mp; mp[A[0]]=0; int ans=INT_MAX;
    for(int i=1; i<A.size(); i++){
        if(mp.find(A[i])!=mp.end()){
            ans=min(ans,(i-mp[A[i]]));
            mp[A[i]]=i;
        }
        else{
            mp[A[i]]=i;
        }
    }
    if(ans==INT_MAX){
        return -1;
    }
    else{
        return ans;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter the elements in the vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int ans = solve(A);
    cout<<"The minimum distance between two equal elements is : "<<ans<<endl;
    return 0;
}
