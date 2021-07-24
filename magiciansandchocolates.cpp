//Constraints: 1<=N<=10^5, 0<=bags<=INT_MAX, 0<=A<=10^5
//Time Complexity: O(N)
//Find the max number of chocolates eaten in A time if after eating chocolates from a bag it gets
//refilled by bags[i]/2 chocolates again

#include<bits/stdc++.h>
using namespace std;
int maxchoc(vector<int>bags,int A){
    priority_queue<int>pq; int ans,temp;
    for(int i=0; i<bags.size(); i++){
        pq.push(bags[i]);
    }
    while(A--){
        ans+=pq.top();
        temp=pq.top();
        pq.pop();
        pq.push(temp/2);
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number of bags\n";
    cin>>n;
    vector<int>bags(n);
    cout<<"Enter the number of chocolates in each bag\n";
    for(int i=0; i<n; i++)
        cin>>bags[i];
    int A;
    cout<<"Enter the units of time\n";
    cin>>A;
    int ans = maxchoc(bags,A);
    cout<<"The maximum number of chocolates that can be eaten in "<<A<<" units of time is : "<<ans<<endl;

    return 0;
}