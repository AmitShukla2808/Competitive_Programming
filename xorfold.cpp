#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m; int c=0;
        while (n--)
        { 
            string row;
            cin>>row;
            int l=count(row.begin(),row.end(),'1');
            c+=l;
        }
        if(c%2==0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}
