//Constraints: 1<=n<=20, 1<=A[i]<=50, 1<=B<=500
//Time Complexity: exponential
//Find all distinct combinations in an array which give a target sum

#include<bits/stdc++.h>
using namespace std;
void solve(vector<vector<int>>&ans,int i, int sum,vector<int>&nw,int B,vector<int>A,int &count){
    if(sum>=B){
        if(sum==B){
            ans.push_back(nw);
        }
        return ;
    }
    if(i==A.size()){
        return ;
    }
    sum+=A[i];
    nw.push_back(A[i]); count++;
    solve(ans,i,sum,nw,B,A,count);
    sum-=nw.back();
    nw.pop_back();count++;
    solve(ans,i+1,sum,nw,B,A,count);
}
void rmvduplicates(vector<int>&A){
    sort(A.begin(),A.end());
    int s=A[0];
    for(int i=1; i<A.size();){
        if(A[i]==s){
            A.erase(A.begin()+i);
            s=A[i];
            continue;
        }
        i++;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter elements in the vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int B;
    cout<<"Enter the number for which you want to find the sum"<<endl;
    cin>>B;
    rmvduplicates(A); vector<vector<int>>ans; int sum=0;
    vector<int>nw; int count=0;
    solve(ans,0,sum,nw,B,A,count);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<count<<endl;
    return 0;
}
