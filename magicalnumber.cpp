//Constraints: 1<=A<=10^9, 1<=B,C<=40000
//Time Complexity: O(log(INT_MAX)) = O(1)

#include<bits/stdc++.h>
using namespace std;
int solve(int B, int C, int A){
    int start=0,end=INT_MAX,mid=0,num=0,lcm=(B*C)/__gcd(B,C);
    while(start<end){
        mid=start+(end-start)/2;
        num=mid/B+mid/C-mid/lcm;
        if(num<A){
            start=mid+1;
        }
        else{
            end=mid;
        }
    }
    return start;
}
int main(int argc, char const *argv[])
{
    int B,C,A;
    cout<<"Enter the two numbers B & C"<<endl;
    cin>>B>>C;
    cout<<"Enter the term you want"<<endl;
    cin>>A;
    int ans = solve(B,C,A);
    cout<<"Ath magical number is : "<<ans<<endl;
    return 0;
}
