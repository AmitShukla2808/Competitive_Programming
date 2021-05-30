//Constraints: 1<=n<=10^5, 1<=A[i]<=10^9
//Time Complexity: O(n)
/*Given an array of unsorted consecutive integers, find the minimum number of swaps needed to sort
the given array*/

#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>A){
    int n=A.size(); int i=0; int swaps=0; int temp=0;
    vector<int>pos(n);
    for(i=0; i<n; i++){
        pos[A[i]-1]=i;
    }
    i=0;
    while(i<n){
        if(A[i]==i+1){
            i++;
        }
        else{
            int val=i+1;
            int j=pos[val-1];
            pos[A[i]-1]=j;
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            swaps++;
            i++;
        }
    }
    return swaps;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter the elements in the vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int ans = solve(A);
    cout<<"The minimum number of swaps needed is : "<<ans<<endl;
    return 0;
}
