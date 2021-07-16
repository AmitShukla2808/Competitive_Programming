#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n; int gcd; int ans = INT_MAX; int sum=0;
        vector<int>A(n);
        vector<int>hcfleft(n);
        vector<int>hcfright(n);
        for(int i=0; i<n; i++){
            cin>>A[i];
            sum+=A[i];
            if(i==0){
                gcd = A[i];
                hcfleft[i] = gcd;
            }
            else{
                gcd = __gcd(gcd,A[i]);
                hcfleft[i]=gcd;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(i==n-1){
                gcd = A[n-1];
                hcfright[i] = gcd;
            }
            else{
                gcd = __gcd(gcd,A[i]);
                hcfright[i] = gcd;
            }
        }
        int deno;
        for(int i=0; i<n; i++){
            if(i==0){
                deno = (sum-A[i])/(hcfright[i+1]) + 1;
                ans = min(ans,deno);
            }
            else if(i==n-1){
                deno = (sum-A[i])/(hcfleft[i-1])  + 1;
                ans = min(ans,deno);
            }
            else{
                deno = (sum-A[i])/(__gcd(hcfleft[i-1],hcfright[i+1])) + 1;
                ans = min(ans,deno);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}