//Constraints: 1<=n<=10^5, 1<=A[i],.B<=10^9
//Time Complexity: O(n)   //Using Two pointer technique

#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>A,int B){
    int start=0,end=A.size()-1,c=0,sum=0;
    while(start<end){
        sum=A[start]+A[end];
        if(sum==B){
            c++; start++;
        }
        else if(sum>B){
            end--;
        }
        else{
            start++;
        }
    }
    return c;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter numbers in vector in ascending order"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int B;
    cout<<"Enter the number for which you want to count pairs for sum"<<endl;
    cin>>B; 
    int ans = solve(A,B);
    cout<<"The number of such pairs is : "<<ans<<endl;
    return 0;
}
