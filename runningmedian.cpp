//Constraints: 1<=n<=10^6
//Time Complexity: O(NlogN)

#include<bits/stdc++.h>
using namespace std;
vector<double> solve(vector<int>A){
    priority_queue<int>low;
    priority_queue<int,vector<int>,greater<int>>high; vector<double>ans;
    int i=0,n=A.size();
    while(i<n){
        low.push(A[i]);
        high.push(low.top());
        low.pop();
        while(high.size()>low.size()){
            low.push(high.top());
            high.pop();
        }
        if((high.size()+low.size())%2!=0){
            ans.push_back(low.top());
        }
        else{
            ans.push_back(((double)high.top()+(double)low.top())/2);
        }
        ++i;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number of elements\n";
    cin>>n;
    vector<int>A(n);
    cout<<"Enter the elements in the vector\n";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    vector<double>ans;
    ans = solve(A);
    cout<<"The running medians are : ";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}