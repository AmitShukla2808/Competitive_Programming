//Constraints: 1<=N<=10^6 , 1<=A[i]<=10^6
//Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n; 
    unordered_map<int, int>mp; int ans = INT_MAX; int val=0;
    cout<<"Enter elements in map"<<endl;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        if(mp.find(temp)!=mp.end()){
            ans=min(ans,mp[temp]);
            if(ans==mp[temp]){
                val=temp;
            }
        }
        else
        {
            mp[temp]=i;
        }
        
    }
    if(ans==INT_MAX){
        cout<<"No element repeated"<<endl;
    }
    else{
    cout<<"The number to repeated with least index is : "<<val<<" at position : "<<ans+1<<endl;
    }
    return 0;
}
