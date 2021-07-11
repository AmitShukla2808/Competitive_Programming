#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,sums=0,sums1=0;
    cout<<"Enter the dimensions of the cake grid\n";
    cin>>n>>m;
    vector<vector<int>>A(n,vector<int>(m,0)); bool flag = false;
    cout<<"Enter the values of each cell\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char a;
            cin>>a;
            if(a=='S'){
                A[i][j]=2;
            }
            else{
                A[i][j]=1;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(A[i][j]==2){
                flag = true;
                break;
            }
            else{
                sums+=A[i][j];
                sums1+=A[i][j];
            }
        }
        if(flag==false){
            for(int k=0; k<m; k++){
                A[i][k]=0;
            }
            sums1=0;
        }
        else{
            sums-=sums1;
            sums1=0;
            flag = false;
        }
    }
    flag = false;
    sums1=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(A[j][i]==2){
                flag = true;
                break;
            }
            else{
                sums+=A[j][i];
                sums1+=A[j][i];
            }
        }
        if(flag==false){
            for(int k=0; k<n; k++){
                A[k][i]=0;
            }
            sums1=0;
        }
        else{
            sums-=sums1;
            sums1=0;
            flag = false;
        }
    }
    cout<<"The maximum number of cakes cells that can be eaten by cakeminator is : "<<sums<<endl;
    return 0;
}