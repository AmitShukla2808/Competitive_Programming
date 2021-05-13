//Constraints: 1<=n<=10^9
//Time Complexity: solve() function :- O(log(n)) , optimised() function :- O(1)

#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    int l=0,u=n-1,mid=1,sumbrick;
    while(l<=u && n!=1){
        mid=l+(u-l)/2;
        sumbrick=((mid)*(mid+1))/2;
        if(sumbrick==n){
            return mid; 
            break;
        }
        else if(sumbrick<n){
            if(sumbrick+(mid+1)>n){
                break;
            }
            else{
                l=mid+1;
            }
        }
        else{
            u=mid-1;
        }
    }
    return mid;
}
int optimised(int n){
    int root = -1+sqrt(1+8*n);
    return root/2;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of blocks"<<endl;
    cin>>n;
    int ans=solve(n);
    int ans1=optimised(n);
    cout<<"The maximum height of staircase obtained is : "<<ans<<endl;
    cout<<"The maximum height of staircase obtained is : "<<ans1<<endl;
    return 0;
}
