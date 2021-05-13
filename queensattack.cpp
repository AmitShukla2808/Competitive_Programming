//Constraints: 0<n<=10^5, 0<=k<=10^5, A single cell may contain more than one obstacle.
//             There will never be an obstacle at the position where the queen is located.
//Time Complexity: O(k)
//Short forms in comments: UL(Upper Left),UR(Upper Right),LR(Lower Right),LL(Lower Left),obs(obstacles)

#include <bits/stdc++.h>
using namespace std;
int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles) {
    r_q=n-r_q+1;
    for(int i=0; i<k; i++){
        obstacles[i][0]=n-obstacles[i][0]+1;
    }
    int ans=0; int min1=0,min2=0,min3=0,min4=0,min5=0,min6=0,min7=0,min8=0; int x,y;
    int res1=0,res2=0,res3=0,res4=0,res5=0,res6=0,res7=0;
    ans=ans+(n-c_q)+(c_q-1)+(n-r_q)+(r_q-1); // rightwards,leftwards,downwards,upwards moves without obs
    ans=ans+(min(r_q,c_q)-1);                // upper left hand corner without obs
    ans=ans+(n-max(r_q,c_q));                // lower right hand corner without obs
    ans=ans+min((r_q-1),(n-c_q));            // upper right hand corner without obs
    ans=ans+min((c_q-1),(n-r_q));            // lower left hand corner without obs
    for(int i=0; i<k; i++){
        if(i==0){
            min2=n+1,min4=n+1,min5=n+1,min7=n+1;
        }
        x=obstacles[i][0];
        y=obstacles[i][1];
        if(r_q-x==0){                        // obs in same row
            if(c_q>y){
                min1=max(min1,y);            // obs present to left of queen 
            }
            else
            {
                min2=min(min2,y);            // obs present to right of queen
                res5=n-min2+1;
            }
            
        }
        if(c_q-y==0){                        // obs in same column
            if(r_q>x){
                min3=max(min3,x);            // obs present above queen 
            }
            else{
                min4=min(min4,x);            // obs present below queen
                res6=n-min4+1; 
            }
        }
        if(r_q-x==c_q-y){                    // obs along left diagonal or UL to LR
            if(r_q<x){
                min5=min(min5,x);            // obs after queen(from Queen to LR)
                if(min5==x){
                    res1=max(x,y);
                    res7=n-res1+1;
                }
            }
            else{
                min6=max(min6,x);            // obs before queen(from UL to Queen)
                if(min6==x){
                    res2=min(x,y);
                }
            }
        }
        if(r_q-x==y-c_q){                    // obs along right diagonal or LL to UR
            if(r_q>x){
                min7=min(min7,y);            // obs after queen(from Queen to UR)
                if(min7==y){
                    res3=min(x,(n-y+1));
                } 
            }
            else{
                min8=max(min8,y);            // obs before queen(from LL to Queen)
                if(min8==y){
                    res4=min((n-x+1),y);
                }
            }
        }
    }
    ans=ans-min1-res5-min3-res6-res7-res2-res3-res4; // subtracting the no. of obstacles
    return ans;
}
int main(int argc, char const *argv[])
{
    int n,k,rc,rq; 
    cout<<"Enter the chess dimensions"<<endl;
    cin>>n;
    cout<<"Enter the number of obstacles"<<endl;
    cin>>k;
    cout<<"Enter the coordinates of Queen"<<endl;
    cin>>rc>>rq; 
    cout<<"Enter the coordinates of obstacles"<<endl;
    vector<vector<int>>A(k,vector<int>(2));
    for(int i=0; i<k; i++){
        for(int j=0; j<2; j++){
            cin>>A[i][j];
        }
    }
    int ans=0; 
    ans=queensAttack(n,k,rc,rq,A);
    cout<<"The possible number of moves for the queen are : ";
    cout<<ans<<endl;
    return 0;
}
