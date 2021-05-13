//Constraints: 1<=n<=10^6 
//Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter the elements in the vector"<<endl;
    int i=0; 
    for(i=0; i<n; i++){
        cin>>A[i];
    }
    int S;
    cout<<"Enter the target sum"<<endl;
    cin>>S; int su=0; int w=0;
    unordered_map<int,int>mp;
    for(i=0; i<n; i++){
        su+=A[i];
        if(su==S){
            w=1; break;
        }
        else{
            if(mp.find(su-S)!=mp.end()){
                w=1; break;
            }
            else{
                mp[su]++;
            }
        }
    }
    if(w==0){
        cout<<"No such subarray exists"<<endl;
    }
    else{
        cout<<"Such a subarray exists"<<endl;
    }
    return 0;
}
