#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<string,int>mp;
        for(int i=0; i<3*n; i++){
            string g;
            cin>>g; int num;
            cin>>num;
            mp[g]+=num;
        }
        vector<int>A;
        for(auto it: mp){
            A.push_back(it.second);
        }
        sort(A.begin(),A.end());
        for(int i=0; i<A.size(); i++){
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}