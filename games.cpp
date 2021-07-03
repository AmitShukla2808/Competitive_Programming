#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,c=0;
    cin>>n;
    vector<pair<int,int>>A(n);
    for(int i=0; i<n; i++){
        cin>>A[i].first>>A[i].second;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(A[i].second==A[j].first && j!=i){
                c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
