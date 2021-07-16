//Given k operations, in each operations you have to increase the value present at an index by the value 
//that was present originally at that index. After K operations, find the minimum largest element of
//the array.
//Constraints: 1<=A[i],k<=10^9, 1<=n<=10^6
//Time Complexity: O(nlogn) 

#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>A,int k){
    int l = A.size(); int i;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(i=0; i<l; i++){
        pq.push({2*A[i],i});
    }
    vector<int>curr = A; int ans = INT_MIN;
    while(k--){
        pair<int,int>p = pq.top();
        pq.pop();
        i = p.second;
        curr[i] = curr[i] + A[i];
        pq.push({curr[i]+A[i],i});
    }
    for(auto it : curr){
        ans = max(ans,it);
    }
    return ans;
}
int main(){
    int n,k;
    cout<<"Enter the number of elements\n";
    cin>>n;
    vector<int>A(n);
    cout<<"Enter the elements in the vector\n";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    cout<<"Enter the number of operations\n";
    cin>>k;
    int ans = solve(A,k);
    cout<<"The minimum largest element after "<<k<<" operations is : "<<ans<<endl;
    return 0;
}