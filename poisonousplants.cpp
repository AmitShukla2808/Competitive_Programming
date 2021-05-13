#include<bits/stdc++.h>
using namespace std;
int poisonousPlants(vector<int> p) {
    int c=0; int num=p[0]; int k=0;
    for(int i=1; i<p.size(); i++){
        if(p[i]>num && p[i]>p[i+1] && i!=p.size()-1){
            c++; k=1;
        }
        if(p[i]<num){
            num=p[i]; k=0;
        }
        if(i==p.size()-1 && p[i]>num && k==0){
            c++;
        }
    }
return c;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of plants"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter the toxicated levels of plants"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int ans=poisonousPlants(A);
    cout<<"The plants will stop dying after : "<<ans<<" days "<<endl;
    return 0;
}
