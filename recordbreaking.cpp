//Constraints: 1<=t<=100, 1<=A[i]<=2*10^5 , 1<=N<=2*10^5
//Time Complexity : O(n) 

#include<bits/stdc++.h>
using namespace std;
long int recordbreak(vector<long long int>A){
    long long int maxnum=LONG_LONG_MIN; 
    vector<long long int> B(A.size()); long int ans=0;
    for (int i = 0; i < A.size(); i++)
    {
        maxnum=max(maxnum,A[i]);
        B[i]=maxnum;
    }
    for(int i=0; i<A.size(); i++){
        if(A[i]>B[i-1] && A[i]>A[i+1] && i!=A.size()-1 && i!=0){
            ans++;
        }
        if(i==A.size()-1 && A[i]>B[i-1]){
            ans++;
        }
        if(i==0 && A[i]>A[i+1]){
            ans++;
        }
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    long int t;
    cin>>t;
    while (t--)
    {
        int n;
        cout<<"Enter the number of elements"<<endl;
        cin>>n; 
        vector<long long int> A(n);
        cout<<"Enter elements in the vector"<<endl;
        for(long int i=0; i<n; i++){
            cin>>A[i];
        }
        long int ans=0;
        ans=recordbreak(A);
        cout<<"The number of record breaking days are : "<<ans<<endl;
    }
    
    return 0;
}
