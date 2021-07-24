#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        int root = sqrt(s);
        if(root==sqrt(s)){
            cout<<root<<endl;
        }
        else{
            cout<<root+1<<endl;
        }
    }
    return 0;
}