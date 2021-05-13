//Constraints: No constraints
//Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n; 
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter numbers in vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int s,count=0;
    cout<<"Enter target sum"<<endl;
    cin>>s;
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++){
        if(mp.find(s-A[i])!=mp.end()){
            count++;
        }
        else{
            mp[A[i]]++;
        }
    }
    cout<<"The number of pairs having sum equal to "<<s<<" : "<<count<<endl;
    return 0;
}
