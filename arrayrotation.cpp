#include <bits/stdc++.h>
using namespace std;
vector<int> rotateLeft(int d,vector<int> A){
    vector<int> B(A.size());
    if(d%A.size()==0){
        return A;
    }
    else{
        B=A;
        for(int i=0; i<d; i++){
            B.push_back(B[i]);                        //pushing the front element to back of vector
            B.erase(B.begin()+i);                     //Removing the element from front
            i--; d--;
        }
        return B; 
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the size of vector"<<endl;
    cin>>n;
    cout<<"Enter elements in the vector"<<endl;
    vector<int>A(n,0);
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int d;
    cout<<"Enter the number of rotations to be performed"<<endl;
    cin>>d;                                            //Number of rotations to be performed
    vector<int> ans(n);
    ans=rotateLeft(d,A);
    for(int i=0; i<A.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
