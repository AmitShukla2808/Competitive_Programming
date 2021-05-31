#include<bits/stdc++.h>
using namespace std;
int solve(int p,int d,int m,int s){
    int c=0,sumprice=0,t=p;
    if(s<p){
        return c;
    }
    else{
        while (s>=sumprice && t>=m)
        {
            sumprice+=t;
            t-=d;
            c++;
        }
        c+=(s-sumprice)/m;
    }
    return c;
}
int main(int argc, char const *argv[])
{
    int p,d,m,s;
    cout<<"Enter the starting cost of video game"<<endl;
    cin>>p;
    cout<<"Enter the decrease in cost per game"<<endl;
    cin>>d;
    cout<<"Enter the least cost upto which price can decrease"<<endl;
    cin>>m;
    cout<<"Enter the budget"<<endl;
    cin>>s;
    int ans = solve(p,d,m,s);
    cout<<"The number of video games bought is : "<<ans<<endl;
    return 0;
}
