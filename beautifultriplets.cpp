//Constraints: 1<=n<=10^6, 1<=A[i]<=10^9
//Time Complexity: O(n)
// Find all triplets such that A[k]-A[j]=A[j]-A[i]=d where i<j<k 

#include<bits/stdc++.h>
using namespace std;
int beautifulTriplets(int d, vector<int> A) {
    map<int,int>mp; int ans=0;
    for(int i=0; i<A.size(); i++){
        mp[A[i]]++;
    }
    for(int i=A.size()-1; i>=0; i-=mp[A[i]]){
        if(mp.find(A[i]-d)!=mp.end() && mp.find(A[i]-2*d)!=mp.end()){
            ans+=(mp[A[i]]*mp[A[i]-d]*mp[A[i]-2*d]);
        }
    }
    return ans;
}
int main(int argc, char const *argv[])
{   
    int n,d;
    cout<<"Enter the number of elements"<<endl;
    cin>>n; 
    vector<int>A(n);
    cout<<"Enter elements in vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    cout<<"Enter the common difference"<<endl;
    cin>>d;
    int ans = beautifulTriplets(d,A);
    cout<<"The number of such pairs is : "<<ans<<endl;
    return 0;
}