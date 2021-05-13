// 

#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t; cin>>t;
    while(t--){
        long int n,m,x,y; cin>>n>>m>>x>>y;
        long int a=(n-1)%x;
        long int b=(m-1)%y;
        if(n==2 && m==2){
            cout<<"Chefirnemo"<<endl;
        }
        else if(a==0 && b==0){
            cout<<"Chefirnemo"<<endl;
        }
        else if(a==1 && b==1){
            cout<<"Chefirnemo"<<endl;
        }
        else{
            cout<<"Pofik"<<endl;
        }

        
    }
    return 0;
}
