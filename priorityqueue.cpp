#include<bits/stdc++.h>
using namespace std;
struct compare{
    bool operator()(int a, int b){
        cout<<a<<" "<<b<<endl;
        return (a>b);
    }
};
int main(){
    priority_queue<int,vector<int>,compare>pq;
    int n = 5;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        pq.push(temp);
    }
    cout<<"*********\n";
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}