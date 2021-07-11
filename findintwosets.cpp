#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>B,unordered_map<int,int>mp1,unordered_map<int,int>mp2){
    int ans=0;
    for(int i=0; i<B.size(); i++){
        if(mp1.find(B[i])!=mp1.end()){
            if(mp2.find(i+1)!=mp2.end()){
                ans = ans + (mp2[i+1]*mp1[B[i]]);
            }
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>B(n); unordered_map<int,int>mp1,mp2;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        mp1[temp]++;
    }
    for(int i=0; i<n; i++){
        cin>>B[i];
    }
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        mp2[temp]++;
    }
    int ans = solve(B,mp1,mp2);
    cout<<ans<<endl;
    return 0;
}