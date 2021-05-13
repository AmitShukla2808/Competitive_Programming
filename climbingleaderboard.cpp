//Constraints : 1<=n,m<=2*10^5 , 0<=ranked[i]<=10^9 , 0<=player[j]<=10^9 , 0<=i<n , 0<=j<m

#include <bits/stdc++.h>
using namespace std;
vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    int a=ranked[0];
     for(int i=1; i<ranked.size();){
        if(ranked[i]==a){
            ranked.erase(ranked.begin()+i);
            continue;
        }
        else{
            a=ranked[i];
        }
        ++i;
    }
    vector<int>ans(player.size()); int num=ranked.size()-1; 
    for(int i=0; i<player.size();){
        if(player[i]>ranked[num] && player[i]>ranked[num-1] && num!=0){
            num--; 
        }
        if(player[i]==ranked[num] || (player[i]>ranked[num] && player[i]<ranked[num-1])){
            ans[i]=num+1; 
        }   
        if(player[i]<ranked[ranked.size()-1]){
            ans[i]=ranked.size()+1;
        }
        if(player[i]>ranked[0]){
            ans[i]=1;
        }
        if(ans[i]==0){
            num--; continue;
        }
        ++i;
    }
    return ans;
}
int main(){ 
    int n,m;
    cin>>n>>m;
    vector<int>A(n); vector<int>B(m); 
    for(int i=0; i<A.size();i++){                   
        cin>>A[i];
    }   
   for(int i=0; i<B.size();i++){                   
        cin>>B[i];
    }  
   vector<int>C(m);
   C=climbingLeaderboard(A,B);
   for(int i=0; i<C.size(); i++){
      cout<<C[i]<<" ";
    }
   cout<<endl;
   return 0;
}
