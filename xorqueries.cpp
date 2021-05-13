//Constraints: 1<=n,q<=10^5 , 1<=Q[i][0]<=Q[i][1]<=n
//Time Complexity: O(n+q)

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> solve(int n, vector<int>A, int q, vector<vector<int>>Q){
    vector<int>B(n); int count=0; int dx=0,dy=0,check=0,xorval=0; 
    vector<vector<int>>ans(q,vector<int>(2,0));
    for(int i=0; i<n; i++){
        if(A[i]==0){
            count++;
        }
        B[i]=count;
    }
    for(int i=0; i<q; i++){
        dx=Q[i][0]-1; 
        dy=Q[i][1]-1;
        if(B[dx]==0){
            check=B[dy];
        }
        else{
            check=B[dy]-B[dx]+1;
        }
        if(dx==n-1 && dy==n-1){
            check=B[dy]-B[dx];
        }
        xorval=(dy-dx+1)-check;
        if(xorval%2==0){
            ans[i][0]=0;
        }
        else{
            ans[i][0]=1;
        }
        ans[i][1]=check;
    }
    return ans;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the length of number"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter the bits of the number"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int q; 
    cout<<"Enter the number of queries"<<endl;
    cin>>q;
    vector<vector<int>>Q(q,vector<int>(2,0));
    cout<<"Enter the queries"<<endl;
    for(int i=0; i<q; i++){
        for(int j=0; j<2; j++){
            cin>>Q[i][j];
        }
    }
    vector<vector<int>>ans(q, vector<int>(2,0));
    ans=solve(n,A,q,Q);
    for(int i=0; i<q; i++){
        cout<<"The result for "<<i+1<<"th query : "<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
    return 0;
}
