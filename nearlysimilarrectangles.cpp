#include<bits/stdc++.h>
using namespace std;
int solve(vector<vector<long int>>A){
    map<pair<long int,long int>,long int>mp; long int count =0;
    for(int i=0; i<A.size(); i++){
        long int x = A[i][0];
        long int y = A[i][1];
        long int gcd = __gcd(x,y);
        pair<long int,long int>p = {x/gcd,y/gcd};
        mp[p]++;
    }
    for(auto it : mp){
        count+=((it.second)*(it.second-1))/2;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the number of pairs\n";
    cin>>n;
    vector<vector<long int>>A(n,vector<long int>(2,0));
    cout<<"Enter the pairs\n";
    for(int i=0; i<n; i++){
        cin>>A[i][0]>>A[i][1];
    }
    int ans = solve(A);
    cout<<"The number of pairs is : "<<ans<<endl;
    return 0;
}