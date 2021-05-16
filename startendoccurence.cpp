//Constraints: 1<=n<=10^6, 1<=A[i],B<=10^9
//Time Complexity: O(log(n))

#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>A, int B, int flag){
    int l=0,u=A.size()-1,mid=0; int pos=-1;
    while(l<=u){
        mid=l+(u-l)/2;
        if(A[mid]==B){
            pos=mid;
            if(flag==1){
                l=mid+1;
            }
            else{
                u=mid-1;
            }
        }
        else if(A[mid]>B){
            u=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return pos;
}
int main(){
    int n,B;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter elements in the vector"<<endl;
    int i;
    for(i=0; i<n; i++){
        cin>>A[i];
    }
    cout<<"Enter the number you want to find out"<<endl;
    cin>>B;
    int ans;
    ans = solve(A,B,0);
    if(ans==-1){
        cout<<"Not found"<<endl;
    }
    else{
        int ans1 = solve(A,B,1);
        cout<<"The entered number first occurs at index "<<ans<<" and last occurs at index "<<ans1<<endl;
    }
    return 0;
}