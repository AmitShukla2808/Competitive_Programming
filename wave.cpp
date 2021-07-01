#include<bits/stdc++.h>
using namespace std;
string check(int n,int ans){
    if(ans==-1){
        return "POSITIVE";
    }
    else if(ans==0){
        if(n%2==0){
            return "POSITIVE";
        }
        else{
            return "NEGATIVE";
        }
    }
    else{
        if((n-ans)%2==0){
            return "POSITIVE";
        }
        else{
            return "NEGATIVE";
        }
    }
}
int solve(vector<int>A,int n,int temp){
    int start=0,end=n-1,mid=0,ans=-1;
    while(start<=end){
        mid=start+(end-start)/2;
        if(temp<=A[mid]){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}
int main(){
    int n,q;
	cin>>n>>q;
	vector<int>A(n);
	for(int i=0; i<n; i++){
	    cin>>A[i];
	}
    sort(A.begin(),A.end()); int ans=0; string ans1="";
	while(q--){
	    long int temp;
        cin>>temp;
        ans=solve(A,n,temp);
        if(A[ans]==temp){
            cout<<0<<endl; continue;
        }
	    ans1=check(n,ans);
        cout<<ans1<<endl;
	}
    return 0;
}