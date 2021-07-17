#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,string>>A(2);
    A[0]={3,"i"};
    A[1]={4,"love"};
    sort(A.begin(),A.end());
    for(int i=0; i<2; i++){
        cout<<A[i].first<<" "<<A[i].second<<endl;
    }
    return 0;
}