#include<bits/stdc++.h>
using namespace std;
bool check(string g){
    stack<char>A; int i;
    for(i=0; i<g.size(); i++){
        if(g[i]=='('){
            A.push(g[i]);
        }
        else if(A.empty() && g[i]==')'){
            return false;
        }
        else if(g[i]==')'){
            if(A.top()=='('){
                A.pop(); continue;
            }
            else{
                return false;
            }
        }
    }
    if(A.empty()){
        return true;
    }
    else{
        return false;
    }
}
void solve(int n, stack<char>braces, string str,int &count){
    if(str[0]==')'){
        return;
    }
    if(str.size()==2*n){
        if(check(str)){
            cout<<count+1<<"  "<<str<<endl;
            count++;
        }
        return;
    }
    str+='(';
    solve(n,braces,str,count);
    str = str.substr(0,str.size()-1);
    str+=')';
    solve(n,braces,str,count);
}
int main(){
    int n;
    cout<<"Enter the number of pairs of paranthesis\n";
    cin>>n;
    stack<char>braces; string str=""; int count;
    solve(n,braces,str,count);
    return 0;
}