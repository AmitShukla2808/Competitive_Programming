#include<bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m; int h=m-1; int i=1;
    string s="",str="",p="*",st="|",sc="",sct="";
    while(h--){
        str+=" "; 
    }
    h=m;
    while(h--){
        s+="-";sct+="_";sc+=" ";
    }
    s+="*"; sc+="|";
    h=m;
    while(h--){
        cout<<str; str=str.substr(0,str.size()-1);
        cout<<p<<s;
        p="*"+p+"*";
        cout<<endl;
    }
    int l=p.size()-4;
    while(l--){
        st+=" ";
    }
    st+="|";
    h=m-1; 
    while(h--){
        cout<<st<<sc<<endl;
    }
    cout<<st<<sct.substr(0,s.size()-1)<<"|"<<endl;
    return 0;
}