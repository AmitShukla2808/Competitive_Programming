//Constraints: 1<=n<=10^6
//Time Complexity: O(NlogN)
//The logic works by confirming that the vehicle can pass by each gas station completely along with
//the destination.

#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>C,vector<int>D,int A,int B){
   priority_queue<int>p;
   int loc=0,prev=0,tank=B,i=0,capacity=0,ans=0;
   while(i<C.size()){
        loc = C[i];         // present location
        capacity = D[i];   
        if(A>C[i]){
            tank = tank-(loc-prev);     // fuel left
            while(!p.empty() && tank<0){
                tank+=p.top();
                p.pop();
                ans++;
            }
            if(tank<0){        // if fuel is not enough
                return -1;
            }
            p.push(capacity);
            prev = loc;
        }
        else{
            tank = tank-(A-prev);         // present gas station is ahead of destination
            while(!p.empty() && tank<0){
                tank+=p.top();
                p.pop();
                ans++;
            }
            if(tank<0){            // If not possible to reach destination
                return -1;
            }
            return ans;
        }
        i++;
    }
   tank = tank-(A-prev);            // if destination is ahead of the last station
   while(!p.empty() && tank<0){
       tank+=p.top();
       p.pop();
       ans++;
   }
   if(tank<0){
       return -1;
   }
   return ans;
}
int main(){
    int A,B,n;
    cout<<"Enter the destination stop\n";
    cin>>A;
    cout<<"Enter the starting stop\n";
    cin>>B;
    cout<<"Enter the number of refueling stops in between\n";
    cin>>n;
    vector<int>C(n),D(n);
    cout<<"Enter the distance and amount of fuel at each station\n";
    for(int i=0; i<n; i++){
        cin>>C[i]>>D[i];
    }
    int ans = solve(C,D,A,B);
    if(ans==-1){
        cout<<"Not possible to reach destination\n";
    }
    else{
        cout<<"The minimum stops required to reach destination is : "<<ans<<endl;
    }
    return 0;
}