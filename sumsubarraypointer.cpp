//Constraints: 1<=n<=10^5, 1<=A[i],B<=10^9
//Time Complexity: O(n)   Using two pointer technique

#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int>A,int B){
    vector<int>ans; int start=0,end=0,sum=0,k=0;
    while(start<=end && end<A.size()){
        sum+=A[end]; ans.push_back(A[end]); end++;
        if(sum>B){
            sum-=A[start];
            ans.erase(ans.begin()); start++;
        }
        if(sum==B){
            return ans;
        }
    }
    if(k==0){
        return {-1};
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
    cout<<"Enter the elements in vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int B; 
    cout<<"Enter the target sum"<<endl;
    cin>>B;
    vector<int>ans;
    ans = solve(A,B);
    if(ans[0]==-1){
        cout<<"No such subarray exists"<<endl;
    }
    else{
        cout<<"The subarray with given sum is : ";
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
