//Constraints : 1<=s[i][j]<=9 

#include <bits/stdc++.h>
using namespace std;
int formingMagicSquare(vector<vector<int>> s) {
    int ans=0; int d=0; int min=INT_MAX;
    vector<int>Z(9); int p=0;
    for(int i=0; i<3;i++){                   
        for(int j=0; j<3; j++){
            Z[p]=s[i][j]; p++;
        }
    }  
    p=0; 
    vector<int>A={8, 1, 6, 3, 5, 7, 4, 9, 2 ,6, 1, 8, 7, 5, 3, 2, 9, 4, 4, 9, 2, 3, 5, 7, 8, 1, 6,2, 9, 4, 7, 5, 3, 6, 1, 8, 8, 3, 4, 1, 5, 9, 6, 7, 2,4, 3, 8, 9, 5, 1, 2, 7, 6, 6, 7, 2, 1, 5, 9, 8, 3, 4, 2, 7, 6, 9, 5, 1, 4, 3, 8}; 
    for(int i=0; i<72; i++){
        d=d+abs(A[i]-Z[p]);
        p++;
        if(p%9==0){
            p=0;  
            if(min>d){
                min=d; 
            }
            d=0;
        }
    }
    ans=min;
    return ans;
}
int main(int argc, char const *argv[])
{
    vector<vector<int>>A(3,vector<int>(3));
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>A[i][j];
        }
    }
    int ans=0; 
    ans=formingMagicSquare(A);
    cout<<ans<<endl;
    return 0;
}
