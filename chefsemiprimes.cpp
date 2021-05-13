// No Constraints
// Time Complexity : O(n^2)

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n; vector<int>A(0); int count=0,num=0; int w=0;
    for(int i=1; i<=n; i++){
        count=0; num=i; w=0;
        for(int j=2;j<=i; j++){
            while(num%j==0){             // checking if j is a factor of num
                num=num/j; count++;      // dividing num by j till j remains no more a factor of num
            }
            if(count==2 && num!=1){      // checking if i has more than two factors between 2 and i
               w=1; break;
            }
        }
        if(count==2 && w==0){
            A.push_back(i);              // Storing semi primes in vector A
        }
    }
    for(int i=0; i<A.size();i++){
        cout<<A[i]<<" ";
    }
    cout<<"\n"<<A.size()<<endl;
    return 0;
}