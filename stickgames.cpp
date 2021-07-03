#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;
    cout<<"Enter the number of horizontal and vertical sticks"<<endl;
    int minsticks=min(n,m);
    if(minsticks%2==0){
        cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }
    return 0;
}
