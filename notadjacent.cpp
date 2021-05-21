#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{   
    cout<<"Enter the numer of test cases"<<endl;
    int t;
    cin>>t; int g=t;
    while(t--){
        cout<<"Case "<<(g-t)<<" :"<<endl;
        int n; 
        cout<<"Enter size of matrix"<<endl;
        cin>>n;
        vector<vector<int>>A(n,vector<int>(n,0));
        if(n==2){
            cout<<"No such matrix possible"<<endl;
        }
        else{
            cout<<"Matrix : "<<endl;
            int i=1,j=1;
            for(i=0; i<n; i++){
                for(j=0; j<n; j++){
                    if(j<i){
                        A[i][j]=((i+1)+(n-i+j)*n);
                    }
                    else{
                        A[i][j]=(i+1)+(j-i)*n;
                    }
                }
            }
            for(i=0; i<n; i++){
                for(j=0; j<n; j++){
                    cout<<A[i][j]<<"\t";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
