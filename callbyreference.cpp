#include <bits/stdc++.h>
using namespace std;
void functionfirst(int* k){
    *k=*k+5;
    cout<<k<<endl;
}
void functionsecond(int& z){
    z=z+5;
}
int main(){
    int p=5; 
    functionfirst(&p);
    cout<<p<<endl;
    functionsecond(p);
    cout<<p<<endl;
    //int z=&p;
    //cout<<p<<endl;
    return 0;
}