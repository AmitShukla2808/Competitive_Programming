//Constraints: 1<=n<=10^6 , 1<=A[i]<=10^9
//Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;
pair<int,int> solve(vector<int>A){
    sort(A.begin(),A.end());
    int num1=0,num2=0,i=0,maxnum=0,minnum=0;
    if(A.size()%2!=0){
        num1=A[A.size()/2];
        num2=A[0];
    }
    for(i=0; i<=A.size()/2-1; i++){
        maxnum+=(A[A.size()-1-i]-A[i]);
    }
    for(i=A.size()-1; i>0; i-=2){
        minnum+=A[i]-A[i-1];
    }
    maxnum+=num1;
    minnum+=num2;
    pair<int,int>B = {maxnum,minnum};
    return B;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter the numbers in the vector"<<endl;
    int i;
    for(i=0; i<n; i++){
        cin>>A[i];
    }
    pair<int,int>B;
    B=solve(A);
    cout<<"The maximum value is : "<<B.first<<endl;
    cout<<"The minimum value is : "<<B.second<<endl;
    return 0;
}
