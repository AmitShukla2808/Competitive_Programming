#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>food, int A){
    unordered_map<int,int>mp;
    for(int i=0; i<food.size(); i++){
        mp[food[i]]++;
    }
    int start=0,end=food.size(),mid=0,sum=0,ans=0;
    while(start<=end){
        mid=start+(end-start)/2;
        for(auto it=mp.begin(); it!=mp.end(); it++){
            sum+=(it->second)/mid;
        }
        if(sum>=A){
            ans=mid;
            start=mid+1; sum=0;
        }
        else{
            end=mid-1; sum=0;
        }
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n,A;
    cout<<"Enter the number of food items"<<endl;
    cin>>n;
    vector<int>food(n);
    cout<<"Enter the food items in vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>food[i];
    }
    cout<<"Enter the number of items wanted to be in each lunchbox"<<endl;
    cin>>A;
    int ans = solve(food,A);
    cout<<"The maximum number of lunchboxes that can be prepared is : "<<ans<<endl;
    return 0;
}
