#include<bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
// optimized solution for aggresive cows problem
=======
// optimized solution for aggresive cows problem on spoj
>>>>>>> 41fe85d62b0dabb5c764d4aaaf86730a17436665
int solve(vector<int>A,int dis,int co){
    int pos=A[0],cows=1; 
    for(int i=0; i<A.size(); i++){
        if(A[i]-pos>=dis){
            cows++; 
            pos=A[i];
        }
    }
    if(cows>=co){
        return 1;
    }
    else{
        return 0;
    }
}
int main(int argc, char const *argv[])
{   int n;
    cout<<"Enter the number of stalls"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter the location of each stall in order"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int cows;
    cout<<"Enter the number of cows to be seated"<<endl;
    cin>>cows;
    int start=1,end=A[n-1]-A[0],mid=0,ans=0;
    while(start<=end){
        mid=start+(end-start)/2;
        if(solve(A,mid,cows)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<"The largest minimum distance between cows is : "<<ans<<endl;
    return 0;
}
