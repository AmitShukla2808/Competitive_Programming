#include<bits/stdc++.h>
using namespace std;
void minimumBribes(vector<int>q){
    int bribe=0;
    int i=0,j=0;
    for(i=0; i<q.size(); ++i){
        if(q[i]-(i+1)>2){
            cout<<"Too chaotic"<<endl;
            i=-1; break;
        }
        else{
            
            for(j=0; j<i; ++j){
                if(q[j]>q[i]){
                    bribe++;
                }
            }
        }
    }
    if(i!=-1){
        cout<<bribe<<endl;
    }
}


int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n; 
        int i=0; cin>>n;
        vector<int>q(n);
        for(i=0; i<n; i++){
            cin>>q[i];
        }
        minimumBribes(q);
    }
    return 0;
}
