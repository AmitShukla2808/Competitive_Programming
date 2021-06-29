#include<bits/stdc++.h>
using namespace std;
/*void solve(vector<string>A, string loginattempt,vector<string>&ans,string attempt,vector<vector<string>>&pass){
    if(attempt.size()>=loginattempt.size()){
        if(attempt==loginattempt){
            pass.push_back(ans);
        }
        return;
    }
    for(int j=0; j<A.size(); j++){
        attempt+=A[j];
        ans.push_back(A[j]);
        solve(A,loginattempt,ans,attempt,pass);
        attempt=attempt.substr(0,attempt.size()-A[j].size());
        ans.pop_back();
    }
    return;
}*/
string hack(vector<string>A,string loginattempt){
    map<char,vector<string>>mp;
    for(auto it:A){
        mp[it[0]].push_back(it);
    }
    int l=0; char t; string check="",ans="";
    for(int i=0; i<loginattempt.size();){
        t=loginattempt[i];
        for(int j=0; j<mp[t].size(); j++){
            if(loginattempt.substr(i,mp[t][j].size())==mp[t][j] && mp[t][j].size()>l){
                l=mp[t][j].size(); 
                check=mp[t][j];
            }
        }
        l=0;
        if(check==""){
            l=-1; break;
        }
        else{
            ans+=check+" ";
            i+=(check.size());
        }
        check="";
    }
    if(l==-1){
        return "WRONG PASSWORD";
    }
    else{
        return ans.substr(0,ans.size()-1);
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of users"<<endl;
    cin>>n; 
    vector<string>A(n);
    cout<<"Enter the passwords of each user"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    string loginattempt;
    cout<<"Enter the login that can be considered as a valid password"<<endl;
    cin>>loginattempt;
    string ans = hack(A,loginattempt);
    cout<<ans<<endl;
    return 0;
}
