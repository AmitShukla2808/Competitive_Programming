#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    unsigned long int n; cin>>n;
    vector<long double>A(n); long double a,b; unsigned long int c,ans=0;
    for(int i=0; i<n; i++){
        cin>>A[i];
        if(i==0){
            A[i]=log(A[i]);
        }
        else{
            A[i]=log(A[i])+A[i-1];
        }
    }
    int t; cin>>t;
    while(t--){ 
        unsigned long int ri,li; unsigned long long int mi; long double ms=0.0; a=0.0,b=0.0;
        c=0; ans=0;
        cin>>li>>ri>>mi; 
        ms=log((long double)mi);
        if(li>=2){
            a=A[ri-1]-A[li-2];
        }
        else{
            a=A[ri-1];
        }
        b=exp(a-ms);
        c=b;
        b=b-c;
        cout<<fixed<<setprecision(0)<<(b*mi)<<endl;
    }
    return 0;
}