#include<bits/stdc++.h>
using namespace std;
void solve(vector<string> &sol, map<char,vector<char>>mp, string seqnce, int i, string comb){
    if(i==seqnce.size()){
        // possible combination found
        sol.push_back(comb);
        return;
    }
    else{
        char c;
        c = seqnce[i];
        int j;
        for(j=0; j<mp[c].size(); j++){
            comb+=mp[c][j];
            solve(sol,mp,seqnce,i+1,comb);
            comb = comb.substr(0,comb.size()-1);
        }
    }
    
}
int main(){
    string seqnce;
    cout<<"Enter the sequence of digits pressed\n";
    cin>>seqnce;
    map<char,vector<char>>mp;
    // Mapping keys to their respective values they represent
    mp['2'] = {'a','b','c'};
    mp['3'] = {'d','e','f'};
    mp['4'] = {'g','h','i'};
    mp['5'] = {'j','k','l'};
    mp['6'] = {'m','n','o'};
    mp['7'] = {'p','q','r','s'};
    mp['8'] = {'t','u','v'};
    mp['9'] = {'w','x','y','z'};
    vector<string>sol; string comb="";
    solve(sol,mp,seqnce,0,comb);
    cout<<"The possible combinations are\n";
    for(int i=0; i<sol.size(); i++){
        cout<<i+1<<") "<<sol[i]<<endl;
    }
    return 0;
}