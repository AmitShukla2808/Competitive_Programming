//Constraints: as n has been taken to be of int type therefor 0<=n<=INT_MAX.
//Time Complexity: O(log(n)) 

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number whose square root you want"<<endl;
    cin>>n;
    int l=1,u=n,mid=(l+u)/2;
    while(l<=u){
        if(n/mid<mid){
            u=mid-1;
        }
        else if(n/mid>mid){
            l=mid+1;
        }
        else if(n/mid==mid){
            break;
        }
        mid=(l+u)/2;
    }
    cout<<"The floor square root is : "<<mid<<endl;
    return 0;
}
