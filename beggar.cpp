#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,m; cin>>n>>m; int i,j;
    vector<vector<int>> A(m,vector<int>(3,0));
    for(i=0; i<A.size(); i++){
        for(j=0; j<3; j++){
            cin>>A[i][j];
        }
    }
    int x,y,val; vector<int> ans(n);
    for(i=0; i<A.size(); i++){
        x = A[i][0]-1;
        y = A[i][1]-1;
        val = A[i][2];
        ans[x] = ans[x] + val;                     //Adding the value to the starting beggar
        if(y<n-1){
            ans[y+1] = ans[y+1] - val;             //Subtracting the value from the beggar sitting next
        }                                          //to the last beggar receiving money.
    }
    int su=0;
    for(i=0; i<ans.size(); i++){
        su = su + ans[i];
        cout<<su<<" ";
    }
    cout<<endl;
    return 0;
}
