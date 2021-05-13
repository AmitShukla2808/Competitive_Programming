//Constraints : for brute force (Takes more than 1s for n>=40)

#include<bits/stdc++.h>
using namespace std;
int fibo(int x){
    int f;
    if(x==1 || x==2){
        return 1;
    }
    else{
        f=fibo(x-1)+fibo(x-2);
    }
    return f; 
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int ans=fibo(n);
    cout<<ans<<endl;
    return 0;
}
