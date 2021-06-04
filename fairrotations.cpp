//Constraints: 1<=n<=10^6, 1<=A[i]<=10^9
//Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;
string solve(vector<int>A){
    int c=0;
    for(int i=0; i<A.size()-1;i++){
        if(A[i]%2==0){
            continue;
        }
        else{
            c+=2;
            A[i+1]+=1;
            A[i]+=1;
        }
    }
    for(int i=0; i<A.size(); i++){
        if(A[i]%2!=0){
            return "NO";
        }
    }
    return to_string(c);
}
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter elements in the vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    string ans;
    ans = solve(A);
    if(ans=="NO"){
        cout<<"The solution is not possible"<<endl;
    }
    else{
        cout<<"The minimum number of bread loves to be distributed are : "<<ans<<endl;
    }
    return 0;
}
