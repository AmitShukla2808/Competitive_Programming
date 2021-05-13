//Each element occurs twice in the vector except one. Find the element.

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n; int ans=0;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int> A(n);
    cout<<"Enter elements in the vector"<<endl;
    for(int i=0; i<n; i++){
        cin>>A[i];
        ans = A[i]^ans;
    }
    cout<<"The number present only once is : ";
    cout<<ans<<endl;
    return 0;
}
