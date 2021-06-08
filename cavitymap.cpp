//Constraints: 1<=n<=100, 1<=grid[i]<=10^9
//Time Complexity: O(n^2)

#include<bits/stdc++.h>
using namespace std;
vector<string> solve(vector<string>grid){
   int l=grid.size(); string row,word; vector<string>ans(0);
   for(int i=0; i<l; i++){
       row=grid[i];
       if(i==0 || i==l-1){
           ans.push_back(row);
           continue;
       }
       else{
           for(int j=0; j<l; j++){
               if(j==0 || j==l-1){
                   word+=row[j];
               }
               else if(row[j]>row[j+1] && row[j]>row[j-1] && row[j]>grid[i-1][j] && row[j]>grid[i+1][j]){
                    word+='X';            
               }
               else{
                   word+=row[j];
               }
           }
           ans.push_back(word);
           word="";
       }
   }
   return ans;
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of strings in cavity map"<<endl;
    cin>>n;
    vector<string>cavitymap(n);
    cout<<"Enter the strings in cavity map"<<endl;
    for(int i=0; i<n; i++){
        cin>>cavitymap[i];
    }
    vector<string>cavities(n);
    cavities = solve(cavitymap);
    cout<<"The cavity map is : "<<endl;
    for(int i=0; i<cavities.size(); i++){
        cout<<cavities[i]<<endl;
    }
    return 0;
}
