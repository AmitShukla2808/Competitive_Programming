//Constraints: 1<=n<=10^6, 1<=A[i]<=10^9
//Time Complexity: O(n)
// Given an array and length of sliding window, find maximum element in each window

#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int>A, int k){
    multiset<int>B; vector<int>ans;
    int i=0,pos=0;
    for(i=0; i<k; i++){
        B.insert(A[i]);
    }
    ans.push_back(*(--B.end()));
    B.erase(A[pos]); pos++;
    while(i<A.size()){
        B.insert(A[i]);
        ans.push_back(*(--B.end()));
        B.erase(A[pos]); pos++; i++;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n,k;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter the elements in the vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    cout<<"Enter the length of sliding window"<<endl;
    cin>>k;
    vector<int>ans;
    ans = solve(A,k);
    cout<<"The maximum values in each window are : ";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
