#include <bits/stdc++.h>
using namespace std;
void solvebrute(int i, int j, int &ans , int n){
    if(i==n || j==n || i<j)
     return;
    if(i==n-1 && j==n-1 ){
       ans++; return;
    }
    solvebrute(i,j+1,ans,n);
     solvebrute(i+1,j,ans,n);
}
//int solveoptimised(int i, int j, &ans1, int n){
   
//}
int main(int argc, char const *argv[])
{ int n;
  cout<<"Enter the size of array\n";
  cin>>n;
  int ans=0; int ans1=0; int i,j; i=0; j=0;
  solvebrute(i,j,ans,n);
  cout<<ans<<endl;
    return 0;
}
 