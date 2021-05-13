#include<bits/stdc++.h>
using namespace std;
int hourglassSum(vector<vector<int>>A){
    int i,j; i=0; j=1; int maxsum = INT_MIN; int calsum=0;
    while(i!=4){
        while(j!=5){
            calsum = A[i][j-1]+A[i][j]+A[i][j+1]+A[i+1][j]+A[i+2][j-1]+A[i+2][j]+A[i+2][j+1];
            maxsum = max(maxsum,calsum);
            j++;
        }
        ++i; j=1;
    }
    return maxsum;
}
int main(int argc, char const *argv[])
{
    vector<vector<int>> A(6, vector<int>(6,0));
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            cin>>A[i][j];
        }
    }
    int ans=hourglassSum(A);
    cout<<ans<<endl;
    return 0;
}
