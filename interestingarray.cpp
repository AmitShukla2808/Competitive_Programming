//Constraints: 1<=n<=10^5 , 1<=A[i]<=10^6
//Time Complexity: O(n)
//You can perform two operations: take any 2 elements and make them one as C = A ^ B
//                                take an element and convert it into numbers as D = A + B
//You have to tell if its possible to convert whole array to have only 0's (only 1 element = 0)

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int>A(n);
    cout<<"Enter numbers in vector"<<endl; int count=0;
    for(int i=0; i<n; i++){
        cin>>A[i];
        if(A[i]%2!=0){
            count++;
        }
    }
    if(count%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
