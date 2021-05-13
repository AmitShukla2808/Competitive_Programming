#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t; cin>>t; int ans=0;
    while(t--){
        int a,b,k; cin>>a>>b>>k;
        vector<long int>kprime(b+1,1);  ans=0;
        for(int i=2; i*i<=b; i++){
            if(kprime[i]==1){
                for(int j=i*i; j<=b; j+=i){
                    kprime[j]++;
                }
            }
        }
        for(int i=a; i<=b; i++){
            if(kprime[i]==k){
                ans++; cout<<i<<endl;
            }
        }
        cout<<ans<<endl; ans=0; kprime.clear();
    }
    return 0;
}