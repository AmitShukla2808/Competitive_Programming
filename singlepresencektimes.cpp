//Constraints: 1<=n<=10^6, INT_MIN<=A[i]<=INT_MAX
//Time Complexity: O(32*n) = O(n)
// The present code calculates the number that occurs only once in a vector where every other number
// occurs k times

#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>A,int k){
    vector<int>bits(32,0); int ans=0;
    for(int i=0; i<bits.size(); i++){
        for(int j=0; j<A.size(); j++){
            if(A[j]&(1<<i)){
                bits[i]++;
            }
        }
    }
    for(int i=0;i<bits.size();i++){
        ans+=(bits[i]%k)*(1<<i);
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int k;
    cout<<"Enter how many number of times will each element be repeated except one"<<endl;
    cin>>k;
    vector<int>A(n);
    cout<<"Enter the elements in the vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int ans = solve(A,k);
    cout<<"The number repeated once is : "<<ans<<endl;
    return 0;
}
