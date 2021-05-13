//Constraints: 1<=n<=106 , -106<=A[i]<=106
//Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter the numbers in vector"<<endl;
    int i=0; 
    for(i=0; i<n; i++){
        cin>>A[i];
    }
    unordered_set<int>B(n); int maxlen=1,j=1,ans=0;
    for(i=0; i<n;i++){
        B.insert(A[i]);
    }
    for(i=0; i<n; i++){
        if(B.find(A[i]-1)==B.end()){
            while(B.find(A[i]+j)!=B.end()){
                maxlen++;
                j++;
            }
        }
       ans=max(maxlen,ans); 
       maxlen=1; j=1;
    }
    cout<<"The length of longest consecutive sequence is : "<<ans<<endl;
    return 0;
}
