//Constraints: 0<p<q<10^5
//Time Complexity: O(q-p) ~= O(n)

#include <bits/stdc++.h>
using namespace std;
void kaprekarNumbers(int p, int q) {
    string g = ""; int l = 0; unsigned long long int x = 0,y = 0,z = 0; int ct=0;
    for(long int i=p; i<=q; i++){
        g = to_string(i);
        l = g.length();
        x = i * i;
        y = x % ((int)pow(10,l));
        z = x / ((int)pow(10,l));
        if((y + z)==i){
            cout<<i<<" "; ct++;
        }
    }
    if(ct==0){
        cout<<"INVALID RANGE"<<" ";
    }
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    int p,q; cin>>p>>q;
    kaprekarNumbers(p,q);
    return 0;
}
