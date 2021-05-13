//Constraints: 0<=n<=2^32 
//Time Complexity: O(1) because loop can go max upto 32 times

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    unsigned int n,ans=0;
    cout<<"Enter the number"<<endl;
    cin>>n; int count=0;
    vector<unsigned int>A(0); 
    while(n!=0){
        ans+=(n%2)*(1<<(31-count));
        n=n/2;
        count++;
    }
    cout<<"Reverse is : "<<ans<<endl;
    return 0;
}
