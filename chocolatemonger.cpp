#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t;
    cout<<"Enter the number of test cases"<<endl;
    cin>>t; 
    while(t--){
        int n,x;
        cout<<"Enter the number of chocolates and number of chocolates to be left"<<endl;
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
            cout<<"The number of different types of chocolate that can be eaten are : "<<choc<<endl;
        }
        else{
            cout<<"The number of different types of chocolate that can be eaten are : "<<c<<endl;
        }
    }
    return 0;
}
