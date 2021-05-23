//Constraints: 2<=A<=B+C, 1<=B,C<=10^9
//Time Complexity: O(log(min(B,C))) = O(log(n))

#include<bits/stdc++.h>
using namespace std;
int solve(int A,int B, int C){
    int start=0,end=min(B,C),mid=0,ans=0;
    while(start<=end){
        mid=start+(end-start)/2;
        if(mid==0){
            return 1;
        }
        if(B/mid+C/mid>=A){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int A,B,C;
    cout<<"Enter the number of people in party"<<endl;
    cin>>A;
    cout<<"Enter the number of toffees of type B"<<endl;
    cin>>B;
    cout<<"Enter the number of toffees of type C"<<endl;
    cin>>C;
    if(A>B+C){
        cout<<"Not possible"<<endl;
    }
    else{
        int ans = solve(A,B,C);
        cout<<"The maximum number of minimum number of toffees received by each person is : "<<ans<<endl;
    }
    return 0;
}
