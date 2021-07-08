#include<bits/stdc++.h>
using namespace std;
bool check(vector<string> &bd, int row, int col, int n){
    int i,j;
    // for checking the presence of queen in the same row on left side
    for(i=0; i<col; i++){
        if(bd[row][i]=='Q')
            return false;
    }
    // for checking the presence of queen in the upper left hand diagonal
    for(i=row-1,j=col-1; i>=0 && j>=0; i--,j--){
        if(bd[i][j]=='Q')
            return false;
    }
    // for checking the presence of queen in the lower left hand diagonal
    for(i=row+1,j=col-1; i<n && j>=0; i++,j--){
        if(bd[i][j]=='Q')
            return false;
    }
    return true;
}
void solve(vector<vector<string>> &sol, vector<string> &bd, int col, int n){
    if(col==n){
        sol.push_back(bd);
        return;
    }
    else{
        int i;
        // for each row
        for(i=0; i<n; i++){
            if(check(bd,i,col,n)){
                bd[i][col]='Q';
                solve(sol,bd,col+1,n);
                bd[i][col]='.';
            }
        }
    }
}
vector<vector<string>> solveNqueens(int n){
    vector<vector<string>>sol;
    string p="";
    int i;
    for(i=0; i<n; i++)
        p+='.';
    vector<string>bd(n,p);
    solve(sol,bd,0,n);
    return sol;
}
int main(){
    int n;
    cout<<"Enter the dimensions of the chessboard\n";
    cin>>n;
    vector<vector<string>>sol=solveNqueens(n);
    for(int i=0; i<sol.size(); i++){
        cout<<"Solution number : "<<(i+1)<<endl<<endl;
        for(int j=0; j<sol[i].size(); j++){
            cout<<sol[i][j]<<endl;
        }
        cout<<endl;
    }
    return 0;
}