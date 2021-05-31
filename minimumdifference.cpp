//Constraints: 1<=x,y,z<=10^5,  1<=A[i],B[i],C[i]<=10^9
//Time Complexity: O(x+y+z) or O(max(x,y,z))   Using three pointer technique
//mindiff = min(max(a,b,c)-min(a,b,c))

#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>A,vector<int>B,vector<int>C){
    int a=0,b=0,c=0,mindiff=INT_MAX,num=0;
    while(a<A.size() && b<B.size() && c<C.size()){
        num=max(A[a],max(B[b],C[c]))-min(A[a],min(B[b],C[c]));
        mindiff=min(mindiff,num);
        if(A[a]<=B[b] && A[a]<=C[c]){
            a++;
        }
        else if(B[b]<=A[a] && B[b]<=C[c]){
            b++;
        }
        else{
            c++;
        }
    }
    return mindiff;
}
void add(vector<int>& vc){
    cout<<"Enter the numbers in vector"<<endl;
    for(int i=0; i<vc.size(); i++){
        cin>>vc[i];
    }
}
int main(int argc, char const *argv[])
{
    int x,y,z;
    cout<<"Enter the size of first vector"<<endl;
    cin>>x;
    vector<int>A(x); add(A);
    cout<<"Enter the size of second vector"<<endl;
    cin>>y;
    vector<int>B(y); add(B);
    cout<<"Enter the size of third vector"<<endl;
    cin>>z;
    vector<int>C(z); add(C);
    int ans = solve(A,B,C);
    cout<<"The minimum difference is : "<<ans<<endl;
    return 0;
}
