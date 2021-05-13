//Constraints: 1<=t<=10^5, 1<=|w|<=100
//Time Complexity : O(t*k) where k is some constant      (k is unknown)
//In STL of C++, next_permutation() and prev_permutation() are already present

#include <bits/stdc++.h>
using namespace std;
string biggerisgreater(string g){
    vector<char> A; int i; string h,p;
    p=g;
    sort(p.begin(),p.end());
    reverse(p.begin(),p.end());
    for(i=0; i<g.size(); i++){
        A.push_back(g[i]);
    }
    next_permutation(A.begin(), A.end());
    for(i=0; i<A.size(); i++){
        h+=A[i];
    }
    if(p==g){
        return "no answer";
    }
    return h;
}
int main(int argc, char const *argv[])
{  
    long int t; char temp; int k=0; int ct=0;
    cin>>t;
    while(t--){
        string g;
        cin>>g;
        string ans = biggerisgreater(g);
        if(ans==g){
            ans="No Answer";
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
