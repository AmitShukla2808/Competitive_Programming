//Constraints : 1<=n<=1000 , 1<=arr[i]<=1000 

#include<bits/stdc++.h>
using namespace std;
vector<int> cutTheSticks(vector<int> arr) {
    sort(arr.begin(),arr.end());
    int s=arr[0]; vector<int>ans(0);int c=0; int min=0; int p=0; int w=0;
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size(); j++){
            if(arr[j]!=0){
                p=arr[j];
                arr[j]=arr[j]-s;
                c++;
                if(p>s && w!=1){
                min=arr[j]; w=1;
                }
            }
        }
        w=0; s=min;
        if(c==0){
        break;
        }
        ans.push_back(c);
        c=0;
    }
    return ans;
}
int main(int argc, char const *argv[])
{  int n;
   cin>>n;
   vector<int>A(n);
   for(int i=0; i<n; i++){
       cin>>A[i];
   }
   vector<int>ans(n);
   ans=cutTheSticks(A);
   for(int i=0; i<ans.size(); i++){
       cout<<ans[i]<<" ";
   }
   cout<<endl;
   return 0;
}
