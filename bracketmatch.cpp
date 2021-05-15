#include<bits/stdc++.h>
using namespace std;
bool solve(string g){
    stack<char>A; int i;
    for(i=0; i<g.size(); i++){
        if(g[i]=='{' || g[i]=='[' || g[i]=='('){
            A.push(g[i]);
        }
        else if(A.empty() && (g[i]=='}'||g[i]==')'||g[i]==']')){
            return false;
        }
        else if(g[i]=='}'){
            if(A.top()=='{'){
                A.pop(); continue;
            }
            else{
                return false;
            }
        }
        else if(g[i]==']'){
            if(A.top()=='['){
                A.pop(); continue;
            }
            else{
                return false;
            }
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
int main(int argc, char const *argv[])
{
    string s;
    cout<<"Enter a string with brackets"<<endl;
    getline(cin,s);
    bool ans = solve(s);
    if(ans==0){
        cout<<"The entered string has mismatched brackets"<<endl;
    }
    else{
        cout<<"The entered string is perfectly matched"<<endl;
    }
    return 0;
}
