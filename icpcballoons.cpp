#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int count1=0,count2=0;
        int n;
        cin>>n;
        int temp; int k=0;
        for(int i=0; i<n; i++){
            cin>>temp;
            if(count2==7){
                k=1;
            }
            if(temp<=7 && k!=1){
                count2++;
            }
            if(k!=1){
                count1++;
            }
        }
        cout<<count1<<endl;
    }
    return 0;
}