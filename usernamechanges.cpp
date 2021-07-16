#include<bits/stdc++.h>
using namespace std;
vector<string>solve(vector<string>A){
    vector<string>ans(A.size());
    for(int i=0; i<A.size(); i++){
        string pass = A[i];
        sort(pass.begin(),pass.end());
        if(pass==A[i]){
            ans[i]="NO";
        }
        else{
            ans[i]="YES";
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number of employees\n";
    cin>>n;
    vector<string>A(n);
    cout<<"Enter passwords of users\n";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    vector<string>ans = solve(A);
    cout<<"The possibilities for each employee is\n";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}