//Constraints: 1<=n<=10^5, 1<=m,A[i]<=n
//Time Complexity: O(nlog(n))

#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>A,int n){
    sort(A.begin(),A.end());
    int ans=0,num=n-1,dis=0;
    for(int i=A.size()-1; i>=0 && num>=0;){
        if(abs(num-A[i])>abs(num-A[i-1]) && i!=0){
            i--;
        }
        dis=abs(num-A[i]);
        ans=max(ans,dis);
        num--;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of cities"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the number of cities having space stations"<<endl;
    cin>>m;
    vector<int>A(m);
    cout<<"Enter the location of each space station"<<endl;
    for(int i=0; i<m; i++){
        cin>>A[i];
    }
    int ans = solve(A,n);
    cout<<"The maximum distance between a city to its nearest space station is : "<<ans<<endl;
    return 0;
}
