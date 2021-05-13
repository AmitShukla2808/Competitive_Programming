//Constraints : 1<=|s|<=100 , 1<=n<=10^12 

#include <bits/stdc++.h>
using namespace std; 
long repeatedString(string s, long n) {
int c=0;
for(int i=0; i<s.length(); i++){
    if(s[i]=='a'){
        c++;
    }
}
long int p=0; p=n/(s.length());
long d=0; d=n-(p*s.length());
long ans=0; ans=p*c;
for(int i=0; i<d; i++){
    if(s[i]=='a'){
        ans++;
    }
}
return ans;
}
int main(int argc, char const *argv[])
{
    long n; cin>>n; string s; 
    cin>>s;
    long ans=0;
    ans=repeatedString(s,n);
    cout<<ans<<endl;
    return 0;
}
