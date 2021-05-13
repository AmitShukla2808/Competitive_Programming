//Constraints: 1<=t<=10^5,  1<=C<=10^9
//Time Complexity: O(t)

#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int t,po=0,po1=0,i,maxi=0; int d=0;
    cin>>t; 
    while(t--){
        unsigned long long int C;
        cin>>C;
        d=(log2(C));
        po=(int)(pow(2,d))-1;
        po1=(int)(pow(2,d));
        maxi=po*((po+po1)-(C-po1));
        cout<<maxi<<endl;maxi=0;
    }
    return 0;
}