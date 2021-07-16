//Constraints: 1<=n<=10^6, 1<=A[i]<=10^6
//Time Complexity: O(nlogn)

#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>A){
    int l = A.size();
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0; i<l; i++){
        pq.push(A[i]);
    }
    int num=0,sum=0;
    while(pq.size()!=1){
        num = pq.top();
        pq.pop();
        num+=pq.top();
        pq.pop();
        pq.push(num);
        sum+=num;
        num=0;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the number of rope parts\n";
    cin>>n; 
    vector<int>A(n);
    cout<<"Enter the length of each rope part\n";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int ans = solve(A);
    cout<<"The minimum cost to connect ropes is : "<<ans<<endl;
    return 0;
}