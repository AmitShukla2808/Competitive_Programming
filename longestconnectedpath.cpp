#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dir = {{-1,0},{1,0},{0,-1},{0,1},{-1,1},{1,-1},{1,1},{-1,-1}};
void solve(vector<vector<int>>&grid,vector<vector<bool>>&check,int &m,int &n,int i,int j,int c,int &answ){
    if(i==m || j==n || i<0 || j<0 || grid[i][j]==0 || check[i][j]==true){
        return;
    }
    check[i][j]=true;
    answ = max(answ,c);
    for(int k=0; k<8; k++){
        solve(grid,check,m,n,i+dir[k][0],j+dir[k][1],c+1,answ);
    }
    check[i][j]=false;
}
int longestconnect(vector<vector<int>>grid){
    int m = grid.size(); int c=1,ans=1,answ=1;
    int n = grid[0].size();
    vector<vector<bool>>check(m,vector<bool>(n,false));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j]==0){
                continue;
            }
            solve(grid,check,m,n,i,j,c,answ);
            ans = max(ans,answ);
            c=1;
        }
    }
    return ans;
}
int main(){
    int m,n;
    cout<<"Enter the dimensions of the grid\n";
    cin>>m>>n;
    vector<vector<int>>grid(m,vector<int>(n,0));
    cout<<"Enter the values in the grid\n";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>grid[i][j];
        }
    }
    int ans = longestconnect(grid);
    cout<<"The longest connected path in the grid is : "<<ans<<endl;
    return 0; 
}