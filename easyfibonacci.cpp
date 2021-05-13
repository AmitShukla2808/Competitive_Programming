// 

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t; cin>>t; unsigned long long int a=0,b=1,c=0;
    while(t--){
        unsigned long long int n; cin>>n;
        int s=0; s=log(n)/log(2); a=0,b=1,c=0;
        unsigned long long int p=0,m=0; 
        p=pow(2,s); m=p-2;
        if(p==1){
            cout<<a<<endl;
        }
        if(p==2){
            cout<<b<<endl;
        }
        else
        {
            while(m--){
                c=(a+b)%10; 
                a=b; b=c;
            }
            cout<<(c%10)<<endl;
        }
    }
    return 0;
}
