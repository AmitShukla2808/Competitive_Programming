//Constraints : 1<=arr[i],n<=100

#include <bits/stdc++.h>
using namespace std;
int equalizeArray(vector<int> arr) {
    sort(arr.begin(), arr.end()); int max=INT_MIN; int check=0,count=0; check=arr[0];
    for(int i=0; i<arr.size();){
        if(arr[i]==check){
            count++;
        }
        else{
            if(max<count){
                max=count;
            }
            count=0; check=arr[i]; i=i-1;
        }
        if(i==arr.size()-1 && max<count){
            max=count;
        }
        ++i;
    }
    return (arr.size()-max);
}
int main(int argc, char const *argv[])
{
    int n; cin>>n;
    vector<int>A(n);
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int ans=0; 
    ans=equalizeArray(A);
    cout<<ans<<endl;
    return 0;
}
