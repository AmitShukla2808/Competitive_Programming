#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>A){
    int maxlen=1; int i; int minnum=A[0],maxnum=A[0]; int num=A[0]; int c=1;
    for(i=1; i<A.size(); i++){
        if(abs(A[i]-num)<=1 && abs(A[i]-minnum)<=1 && abs(A[i]-maxnum)<=1){
           num=A[i];
           maxnum=max(maxnum,num);
           minnum=min(minnum,num); c++;
        }
        else if(abs(A[i]-num)<=1 && abs(A[i]-minnum)>1 && abs(A[i]-maxnum)<=1){
            minnum=min(A[i],maxnum); c=1; i--;
            num=A[i];
        }
        else{
            num=A[i]; minnum=maxnum=num; c=1;
        }
        maxlen=max(maxlen,c);
    }
    return maxlen;
}
int main(){
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter elements in the vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int ans = solve(A);
    cout<<"The length of longest subarray with difference less than equal to one between elements is : "<<ans<<endl;
    return 0;
}