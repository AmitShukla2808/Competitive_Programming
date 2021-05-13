// No Constraints

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c = 0;
    if(a>b){
        while(b!=1 && b!=0)
        {
            c=b; b=a%b; a=c; 
        }
        if(b==0)
            cout<<"GCD is "<<a<<endl;
        else
            cout<<"GCD is "<<"1"<<endl;
    }
    else{
        while(a!=1 && a!=0){
            c=a; a=b%a; b=c;
        }
        if(a==0)
            cout<<"GCD is "<<b<<endl;
        else
            cout<<"GCD is "<<"1"<<endl;
    }
    return 0;
}