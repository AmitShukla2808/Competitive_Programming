//Constraints: 1<=length of s<=81
//Time complexity: O(n^2) where n = length of s  

#include <bits/stdc++.h>
using namespace std;
string encryption(string s) {
    int l=s.size(); string h="",k=""; 
    for(int i=0; i<l; i++){
        if(s[i]==' '){
            continue;
        }
        else
        {
            h+=s[i];
        }
    }
    int a = ceil(sqrt(h.size()));
    int b = floor(sqrt(h.size()));
    int m = min(a,b);
    int ma = max(a,b); string c; c=h;
    if(m*ma<h.size()){
        m = m+1;
    }
    for(int i=0; i<(m*ma-h.size()); i++){
        c=c+' ';
    } h=c;
    int p=0; vector<vector<char>>A(m, vector<char>(ma));
    for(int i=0; i<m; i++){
        for(int j=0; j<ma; j++){
            A[i][j]=h[p]; p++;
        }
    }
    for(int i=0; i<ma; i++){
        for(int j=0; j<m; j++){
            if(A[j][i]==' '){
                continue;
            }
            k+=A[j][i];
        }
        k+=' ';
    }
    return k;
}
int main(int argc, char const *argv[])
{
    string g; 
    cout<<"Enter a string"<<endl;
    getline(cin,g);
    string ans=encryption(g);
    cout<<"The encrypted string is : "<<ans<<endl;
    return 0;
}
