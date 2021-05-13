#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long int n,q; cin>>n>>q;
    vector<int>A(n); long int count1=0,count0=0;
    for(int i=0; i<n; i++){
        cin>>A[i];
        if(A[i]==1)
            count1++;
        else
            count0++;
    }
    while(q--){
        int t; long int x; cin>>t>>x;
        if(t==1){
            if(A[x-1]==1){
                count1--; count0++;
            }
            else{
                count1++; count0--;
            }
            A[x-1]=1-A[x-1];
        }
        else{
            x=x-count1;
            if(x<=0){
                cout<<"1"<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
    }

    return 0;
}
