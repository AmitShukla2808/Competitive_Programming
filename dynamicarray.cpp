#include<bits/stdc++.h>
using namespace std;
vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> A(n); int lastanswer=0; vector<int> result; int idx=0;
    for(int i=0; i<queries.size(); i++){
        idx = (queries[i][1]^lastanswer)%n;
        if(queries[i][0]==1){
            A[idx].push_back(queries[i][2]);
        }
        else
        {
            lastanswer=A[idx][queries[i][2]%A[idx].size()];
            result.push_back(lastanswer);
        }
    }
    return result;
}
int main(int argc, char const *argv[])
{
    int n,q;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    cout<<"Enter the number of queries"<<endl;
    cin>>q;
    cout<<"Enter the queries"<<endl;
    vector<vector<int>> queries(q, vector<int>(3,0));
    for(int i=0; i<q; i++){
        for(int j=0; j<3; j++){
            cin>>queries[i][j];
        }
    }
    vector<int> ans;
    ans = dynamicArray(n,queries);
    cout<<"The result of queries is : ";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
