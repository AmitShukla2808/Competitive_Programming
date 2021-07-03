#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        string ans;
        if(n[0]=='1'){
            ans="10"+n.substr(1,n.size()-1);
        }
        else{
            ans='1'+n;
        }
        cout<<ans<<endl;
    }
    return 0;
}