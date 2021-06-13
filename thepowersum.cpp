//Constraints: 1<=x<=1000, 1<=n<=10
//Time Complexity: exponential

#include<bits/stdc++.h>
using namespace std;
void solve(int x, int n,int &ans,int i,int sum,int num){
    if(sum>=x){
        if(sum==x){
            ans++;
        }
        return;
    }
    for(int j=i; j<=num; j++){
        sum+=pow(j,n);
        solve(x,n,ans,j+1,sum,num);
        sum-=pow(j,n);
    }
    return;
}
int main(int argc, char const *argv[])
{
    int n,x;
    cout<<"Enter the number X"<<endl;
    cin>>x;
    cout<<"Enter the power to which terms should be"<<endl;
    cin>>n;
    int num=0;
    for(int k=1; pow(k,n)<=x; k++){
        num++;
    }
    int ans=0; int i=1,sum=0;
    solve(x,n,ans,i,sum,num);
    cout<<ans<<endl;
    return 0;
}
