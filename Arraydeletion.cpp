#include <bits/stdc++.h>
using namespace std;
void display(vector<int> A){
    int i,n=A.size();
    for(i=0;i<n;++i){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
vector<int> solve(vector<int> A,int m){
    int i;
    for(i=0;i<A.size();){
        if(A[i]==m){
            A.erase(A.begin()+i);
            continue;
        }
        ++i;
    }
    return A;
}
int main(){
   cout<<"Enter size of array"<<endl;
   int n,i,m;
   cin>>n;
   vector<int> A(n);
   cout<<"Enter the values in the array"<<endl;
   for(i=0;i<n;++i){
       cin>>A[i];
   }
   cout<<"Enter the number to be deleted "<<endl;
   cin>>m;
   cout<<"Elements before deletion performed !!"<<endl;
   display(A);
   cout<<"Elements after deletion performed !!"<<endl;
   vector<int> B = solve(A,m);
   display(B);
   return 0;
}
