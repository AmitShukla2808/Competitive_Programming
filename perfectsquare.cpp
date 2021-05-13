// Constraints : 1<=t<=1000, 1<=n<=10^9

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t; unsigned long long int x= ULLONG_MAX;
    while(t--){
        long long int n; cin>>n; x=ULLONG_MAX;
        for(long long int i=1; i*i<=n; i++){
            if(n%i==0){
                unsigned long long int a=i;
                unsigned long long int b=n/i;
                if((b-a)!=0 && (b-a)%2==0){
                    x=min(x,(b-a)/2);
                }
            }
        }
        if(x==ULLONG_MAX){  
            cout<<-1<<endl;
        }
        else{
            cout<<x*x<<endl;
        }
    }
    return 0;
}