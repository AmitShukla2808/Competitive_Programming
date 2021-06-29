#include<bits/stdc++.h>
using namespace std;
void permutations(vector<int>&nw,vector<int>A,vector<bool>check,int &count){
    if(nw.size()==A.size()){
        cout<<count<<") ";
        for(auto it: nw){
            cout<<it<<" ";
        }
        count++;
        cout<<endl;
        return;
    }
    for(int j=0; j<A.size();){
        if(check[j]==true){
            nw.push_back(A[j]);
            check[j]=false;
        }
        else{
            j++;
            continue;
        }
        permutations(nw,A,check,count);
        nw.pop_back();
        check[j]=true;
        j++;
    }
    return;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter the elements in the vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    vector<int>nw; vector<bool>check(n,true); int count=1;
    cout<<"The possible permutations are"<<endl;
    permutations(nw,A,check,count);
    return 0;
}
