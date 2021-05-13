//Constraints: 1<=n<=10^5 , 1<=A[i]<=10^9
//Time Complexity: O(log(n))
//Prerequisite: Entered elements should be in sorted order 

#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>A){
    int l=0,u=A.size()-1,mid;
    if(A[0]!=A[1]){
        return A[0];
    }
    else if(A[u]!=A[u-1]){
        return A[u];
    }
    else{
        while(l<=u){
            mid=l+(u-l)/2;
            if(mid%2==0){
                if(A[mid]==A[mid+1]){
                    l=mid+1;
                }
                else if(A[mid]==A[mid-1]){
                    u=mid-1;
                }
                else{
                    return A[mid];
                }
            }
            else{
                if(A[mid]==A[mid-1]){
                    l=mid+1;
                }
                else if(A[mid]==A[mid+1]){
                    u=mid-1;
                }
                else{
                    return A[mid];
                }
            }
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the numbers in the vector"<<endl;
    vector<int>A(n);
    int i;
    for(i=0;i<n; i++){
        cin>>A[i];
    }
    int ans=solve(A);
    cout<<"The number present only once is : "<<ans<<endl;
    return 0;
}
