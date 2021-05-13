#include<bits/stdc++.h>
using namespace std;
long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<int> result(n,0); int x,y,val;
    for(int i=0; i<queries.size(); i++){
        x = queries[i][0]-1;
        y = queries[i][1]-1;
        val = queries[i][2];
        result[x] = result[x] + val;
        if(y<n-1){
            result[y+1] = result[y+1] - val;
        }
    }
    long int su=0; long int maximum = LONG_MIN;
    for(int i=0; i<result.size(); i++){
        su+=result[i];
        maximum = max(maximum,su);
    }
    return maximum;
}
int main(int argc, char const *argv[])
{
    int m,n;
    cout<<"Enter the number of queries"<<endl;
    cin>>m;
    cout<<"Enter the size of the answer array"<<endl;
    cin>>n;
    cout<<"Enter the query"<<endl;
    vector<vector<int>> Queries(m, vector<int>(3,0));
    for(int i=0; i<m; i++){
        for(int j=0; j<3; j++){
            cin>>Queries[i][j];
        }
    }
    cout<<"Maximum value in the vector after operations is : ";
    long int ans = arrayManipulation(n,Queries);
    cout<<ans<<endl;
    return 0;
}
