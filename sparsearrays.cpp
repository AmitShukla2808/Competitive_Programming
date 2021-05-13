#include<bits/stdc++.h>
using namespace std;
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    unordered_map<string,int> mp; vector<int> A;
    for(int i=0; i<strings.size(); i++){
        if(mp.find(strings[i])!=mp.end()){
            mp[strings[i]]++;                           //If string already exists in map
        }                                       
        else{
            mp[strings[i]]=1;                           //If string is encountered first time
        }
    }
    for(int i=0; i<queries.size(); i++){
        if(mp.find(queries[i])!=mp.end()){
            A.push_back(mp[queries[i]]);               //pushing frequency of query string
        }
        else{
            A.push_back(0);
        }
    }
    return A;
}
int main(int argc, char const *argv[])
{
    int n,m;
    cout<<"Enter the number of elements in vector and number of queries"<<endl; 
    cin>>n>>m;
    cout<<"Enter Strings in Vector"<<endl;
    vector<string> A(n),Q(m);
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    cout<<"Enter Queries"<<endl;
    for(int i=0; i<m; i++){
        cin>>Q[i];
    }
    vector<int> ans;
    cout<<"The frequency of queries is : ";
    ans = matchingStrings(A,Q);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
