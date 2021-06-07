//Constraints: 1<=t<=10^5, 1<=n,m<=10^6
//Time Complexity: O(t*log(max(n,m))) = O(nlog(n))
// The question has been approached by binary exponentiation technique to calculate higher powers
// without overflow.
// Binary Exponentiation: if we want to calculate N^M , we can calculate this in O(log(m)) time by
// seeing the set bits in M. Suppose we want to calculate 3^100 which will cause overflow and TLE. We
// can do this as binary equivalent of 100 is 64 + 32 + 4 = 1100100 so we can write 3^100 as
// (3^64)*(3^32)*(3^4) so this can be done by shifting bits of 100 to right one by one and check if the
// bit at 1 is set then we multiply the the power to ans else not. We have reduced time to log(m) from
// m. Furthermore we can continuously mod to check overflow.

#include <bits/stdc++.h>
# define mod 1000000007
using namespace std;
int main() {
    long long int t;
    cout<<"Enter the number of test cases"<<endl;
    cin>>t;
    while(t--){
        cout<<"Enter value of n and m"<<endl;
        long long int n,m,ans=1,num,two=2;
        cin>>n>>m;
        while(n>0){
            if(n&1){
                ans*=two;
            }
            two*=two;
            two%=mod;
            ans%=mod;
            n>>=1;
        }
        ans-=1; num=ans; ans=1;
        while(m>0){
            if(m&1){
                ans*=num;
            }
            num*=num;
            num%=mod;
            ans%=mod;
            m>>=1;
        }
        cout<<"The number of such bitwise n tuples possible are : "<<ans<<endl;
    }
	return 0;
}
