#include<bits/stdc++.h>
using namespace std;
int peakelement(vector<int>A){
    int l=0,u=A.size()-1,mid,k=0;
    if(A[0]>A[1]){
        return 0;
    }
    if(A[u]>A[u-1]){
        return u;
    }
    while(l<=u){
        mid=l+(u-l)/2;
        if(A[mid]>A[mid-1] && A[mid]>A[mid+1]){
            return mid;
        }
        else if(A[mid]>=A[mid-1] && A[mid]<=A[mid+1]){
            l=mid+1;
        }
        else if(A[mid]>=A[mid+1] && A[mid]<=A[mid-1]){
            u=mid-1;
        }
        else if(A[mid]<A[mid+1] && A[mid]<A[mid-1]){
            u=mid-1;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter the elements in vector"<<endl;
    int i;
    for(i=0; i<n; i++){
        cin>>A[i];
    }
    int ans = peakelement(A);
    cout<<"The peak element is at "<<ans<<" index"<<endl;
    return 0;
}
