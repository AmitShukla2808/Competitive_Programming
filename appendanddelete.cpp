//Constraints : 1<=|s|,|t|,k<=100 , s and t are composed of only lowercase letters

#include <bits/stdc++.h>
using namespace std;
string appendAndDelete(string s, string t, int k){
    int s1=0; int s2=0;
    s1=s.length(); s2=t.length(); int c=0;
    for(int i=0;i<min(s1,s2); i++){
        if(s[i]==t[i]){
            c++;
        }
        else{
            break;
        }
    }
    int ans=0; ans=s1+s2-(2*c);
    if(k>=(s1+s2)){
        return "Yes";
    }
    else{
        if((s1+s2-k)%2==0 && k>=ans){
            return "Yes";
        }
        else{
            return "No";
        } 
    }
}
int main(int argc, char const *argv[])
{
    string s,t; int k;
    cin>>s>>t>>k;
    string ans="";
    ans=appendAndDelete(s,t,k);
    cout<<ans<<endl;
    return 0;
}
