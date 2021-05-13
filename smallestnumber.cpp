#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int t; cin>>t;
    while(t--){
       unsigned long long int n,k; 
        cin>>n>>k;
        unsigned long long int s=0; s=n%k;
        cout<<s<<endl;
    }
    return 0;
}