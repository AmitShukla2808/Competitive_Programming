#include<bits/stdc++.h>
using namespace std;
int last(int n){
    int person = log2(double(n));
    return (1<<person);
}
int main(int argc, char const *argv[])
{
    int n; 
    cout<<"Enter the number of people in queue"<<endl;
    cin>>n;
    int ans,ans1;
    ans = last(n);
    cout<<"The last person standing is : "<<ans<<"th person"<<endl;
    return 0;
}
