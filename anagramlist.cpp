//Constraints: 1<=n<=10^4 , 1<=|A[i]|<=10^3
//Time Complexity: O(n) if length of words are small in comparison to n. In worst cases as when 
//                      |A[i]|---> 10^3 then complexity can be more of written as O(n*mlog(m)) 
//                      where m is the length of longest word.

#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> anagrams(vector<string>A){
    int i=0; 
    unordered_map<string,vector<string>>mp; string s;
    for(i=0; i<A.size(); i++){
        s=A[i];
        sort(s.begin(),s.end());
        mp[s].push_back(A[i]);
    }
    vector<vector<string>>ans(0,vector<string>());
    for(auto it=mp.begin(); it!=mp.end(); it++){
        ans.push_back(it->second); 
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n; 
    cout<<"Enter the number of words"<<endl;
    cin>>n;
    vector<string>A(n);
    cout<<"Enter words in the vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    vector<vector<string>>ans(0,vector<string>(0));
    ans=anagrams(A);
    cout<<"The groups of anagrams are"<<endl;
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
