#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans = "",check="pawri";
        for(long int i=0; i<s.size(); i++){
            
            if(s[i]=='p' && s[i+1]=='a' && s[i+2]=='r' && s[i+3]=='t' && s[i+4]=='y' && i<=s.size()-5){
                ans = ans + s[i]+s[i+1] + "wri"; i+=4;
            }
            else{
                ans+=s[i];
            }
        }
        cout<<ans<<endl; ans="";
    }
    return 0;
}