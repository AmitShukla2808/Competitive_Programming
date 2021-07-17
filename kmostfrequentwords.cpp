//Constraints: 1<=n<=10^6
//Time Complexity: solve() -> O(NlogN),  solve2() -> O(NlogN)

#include<bits/stdc++.h>
using namespace std;
struct compare{
    bool operator()(pair<int,string>&l, pair<int,string>&r){
        if(l.first==r.first){
            return l.second>r.second;
        }
        return l.first<r.first;
    }
};
vector<string> solve2(vector<string>A,int k){
    unordered_map<string,int>mp; vector<string>ans;
    for(int i=0; i<A.size(); i++){
        mp[A[i]]++;
    }
    priority_queue<pair<int,string>,vector<pair<int,string>>,compare>pq;
    for(auto it : mp){
        pq.push({it.second,it.first});
    }
    while(k--){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}
vector<string> solve(vector<string>A,int k){
    unordered_map<string,int>mp;  map<int,set<string>>mp2;
    vector<string>ans;
    for(int i=0; i<A.size(); i++){
        mp[A[i]]++;
    }
    for(auto it : mp){
        mp2[it.second].insert(it.first);
    }
    for(auto it = mp2.rbegin(); it!=mp2.rend() & k!=0; it++){
        for(auto i = (it->second).begin(); i!=(it->second).end() & k!=0; i++){
            ans.push_back(*i); k--;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number of words\n";
    cin>>n;
    vector<string>A(n);
    cout<<"Enter the words\n";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int k;
    cout<<"Enter the number of most frequent elements you want\n";
    cin>>k;
    vector<string>ans;
    ans = solve(A,k);
    cout<<"The words are : ";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    cout<<"The words are : ";
    ans = solve2(A,k);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    return 0;
}