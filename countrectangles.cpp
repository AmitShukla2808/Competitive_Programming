//Constraints: 1<=n<=10^5 , 1<=A[i],B<=10^9
//Time Complexity: O(n)     Using two pointer technique

#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int solve(vector<int>A,int B){
    int start=0,end=A.size()-1,c=0,area=0;
    while(start<=end){
        area=A[start]*A[end];
        if(area<B){
            c+=2*(end-start)+1; start++;
        }
        else{
            end--;
        }
        c%=mod;
    }
    return c;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter the dimensions of the rectangle in the vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int B; 
    cout<<"Enter the area"<<endl;
    cin>>B;
    int ans = solve(A,B);
    cout<<"The number of rectangles having area less than "<<B<<" are : "<<ans<<endl;
    return 0;
}
