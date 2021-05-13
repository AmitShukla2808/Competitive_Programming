#include<bits/stdc++.h>
using namespace std;
int main(){
    long int t;
    cin>>t;
    while(t--){
        int w=0;
        for(long int i=1; i*i<=1000000; i++){
            cout<<(i*i)<<endl;
            int chefnum;
            cin>>chefnum;
            if(chefnum==1 || chefnum==-1){
                break; w=-1;
            }
        }
        if(w==-1){
            w=0; continue;
        }
    }
    return 0;
}