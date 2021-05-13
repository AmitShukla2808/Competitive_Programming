#include <bits/stdc++.h>
using namespace std;
int main(){
    int p=5;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*(&p)<<endl;
    int k=10; int *ptr=&k;// * indicates or points the value at an address
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    return 0;
}