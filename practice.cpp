#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t;
    cin>>t; 
    while(t--){
        int n,x;
        cin>>n>>x;
        unordered_set<int>A; int c=0; 
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            if(A.find(temp)==A.end()){
                c++;
                A.insert(temp);
            }
        }
        int choc=0;
        choc=n-x;
        if(c>=choc){
            cout<<choc<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    return 0;
}
