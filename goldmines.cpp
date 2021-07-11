#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dir = {{0,-1},{0,1},{-1,0},{1,0}};
void maxgold(vector<vector<int>>goldvalue,vector<vector<bool>>check,int i,int j,
int m,int n,int sum,int &ans){
    if(i==m || j==n || i<0 || j<0 || goldvalue[i][j]==0 || check[i][j]==true){
        return;
    }
    check[i][j]=true;
    sum+=goldvalue[i][j];
    ans=max(ans,sum);
    for(int l=0; l<dir.size(); l++){
        maxgold(goldvalue,check,i+dir[l][0],j+dir[l][1],m,n,sum,ans);
        }
    check[i][j]=false;
}
int main(){
    int m,n;
    cout<<"Enter the dimensions of the mines\n";
    cin>>m>>n;
    cout<<"Enter the values in the cells of the mine\n";
    vector<vector<int>>goldvalue(m,vector<int>(n,0));
    vector<vector<bool>>check(m,vector<bool>(n,false));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>goldvalue[i][j];
        }
    }
    int sum=0,ans=0; int answer=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(goldvalue[i][j]==0)
                continue;
            ans=0;
            maxgold(goldvalue,check,i,j,m,n,sum,ans);
            answer=max(answer,ans);
        }
    }
    cout<<"The maximum gold that can be collected is : "<<answer<<endl;
    return 0;
}