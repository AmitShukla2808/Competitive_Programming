#include <bits/stdc++.h>
using namespace std;                        // |A[i]-A[j]|+|i-j|
int brute(vector<int>A){
    int max=INT_MIN;
    for(int i=0; i<A.size();++i){
        for(int j=0; j<A.size();++j){
           if(max<(abs(A[i]-A[j])+abs(i-j)))
              max = (abs(A[i]-A[j])+abs(i-j));
        }
    }
    return max;
}
int optimised(vector<int>A){
    int max1=INT_MIN,max2=INT_MIN,min1=INT_MAX,min2=INT_MAX,p1,p2;
    for(int i=0; i<A.size(); ++i){
         if(max1<(A[i]+i))
            max1=A[i]+i;
         if(min1>(A[i]+i))
            min1=A[i]+i;
         if(max2<(A[i]-i))
            max2=A[i]-i;
         if(min2>(A[i]-i))
            min2=A[i]-i;
         }
    p1=max1-min1;
    p2=max2-min2;
    int s= max(p1,p2);
    return s;
}
int main(int argc, char const *argv[])
{
    int n; cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter the elements in array"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int ans,ans1;
    ans = brute(A);
    ans1 = optimised(A);
    cout<<ans<<endl;
    cout<<ans1<<endl;
    return 0;
}
