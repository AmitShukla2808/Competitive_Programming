//Constraints: 1<=n<=10^6, A[i]=integer(int) therefore 0<=A[i]<=2^31-1
//Time Complexity: O(n)

#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n); int maximum=0; int setbit=0; int j=0; int count=0,ans=0,bitset=0,power=0;
    cout<<"Enter elements in the vector"<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>A[i];
        maximum=max(maximum,A[i]);
    }
    while(maximum!=0){
        for(int i=0; i<n; i++){
            bitset=(A[i]%2)*(1<<j);
            A[i]=A[i]/2;
            if(bitset & (1<<j)){
                count++;
            }
        }
        if(count!=0){
            ans=(ans+(n-count)); count=0;
            ans=ans%mod;
        }
        j++;
        maximum/=2;
    }
    cout<<"The bitsum pairwise for all pairs is : "<<2*ans<<endl;
    return 0;
}
