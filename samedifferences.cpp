//Constraints: 1<=n<=10^6, 1<=A[i]<=10^9
//Time Complexity: O(n)
// Find all pairs for which A[j]-A[i] = j-i where j>i

#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>A){
    map<int,int>mp; int pairs=0;
    for(int i=0; i<A.size(); i++){
        mp[A[i]-i]++;
    }
    for(auto it : mp){
        pairs+=((it.second-1)*(it.second))/2;
    }
    return pairs;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter elements in the vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int ans;
    ans = solve(A);
    cout<<"The number of such pairs is : "<<ans<<endl;
    return 0;
}
