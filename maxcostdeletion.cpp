#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        string s;
        cin>>n>>a>>b>>s;
        int count0=0,count1=0;
        // Here we check how many sequence of 1's and 0's are present in string
        for(int i=0; i<n; i++){
            if(i==0){
                if(s[i]=='1'){
                    count1++;
                }
                else{
                    count0++;
                }
            }
            else if(s[i]!=s[i-1]){
                if(s[i]=='1'){
                    count1++;
                }
                else{
                    count0++;
                }
            }
        }
        /*Suppose we take different substrings of equal terms of length L1,L2,L3..... so on 
        then these lengths or number of segments will have no effect on term a as
        summation of a*Lk  where K varies from 1 upto K number of segments then
        a*(L1+L2+L3.....Lk) = a*n thus this part remains constant*/
        int ans = a*n;
        /* Now for b part, it depends on number of segments therefore we take minimum segments
        that are possible to delete complete string therefore either 0 can have more segment or 
        1 can have more segments. Thus we select the minimum one for deletion and add 1 to it 
        cause after min deletions the left out string will either contain all 1's or all 0's
        and we can thus wipe out whole string in 1 deletion. This case is to cover if b<=0.
        We can find out the maxmimum to handle for cases of b negative as well as positive*/
        ans+=max(b*n,(b*(min(count0,count1)+1)));
        cout<<ans<<endl;
    }
    return 0;
}