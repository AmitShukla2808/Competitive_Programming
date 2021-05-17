#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cout<<"Enter the number of test cases"<<endl;
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter a number"<<endl;
        cin>>n;
        int d=0,r=0; int l=0;
        for(int i=n; i!=0; i=i/10){
            r=i%10;
            l=l*10+1; d++;
        }
        if(n<r*l){
            r=(d-1)*9+(r-1);
            cout<<"The number of non ordinary numbers till "<<n<<" are : "<<r<<endl;
        }
        else{
            r=(d-1)*9+(r);
            cout<<"The number of non ordinary numbers till "<<n<<" are : "<<r<<endl;
        }
    }
    return 0;
}
