//Constraints: 1<=n<=10^5
//Time Complexity: O(2xN) = O(N)

#include<bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int>A){
    vector<int>ans;
    stack<int>st;
    int i=0;
    while(i<A.size()){
        while(!st.empty() && st.top()>=A[i]){
            st.pop();
        }
        if(st.empty()){
            ans.push_back(-1);
        }
        else{
            ans.push_back(st.top());
        }
        st.push(A[i]);
        i++;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number of elements\n";
    cin>>n;
    vector<int>A(n);
    cout<<"Enter elements in the vector\n";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    vector<int>ans = solve(A);
    cout<<"The nearest possible integer are\n";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}