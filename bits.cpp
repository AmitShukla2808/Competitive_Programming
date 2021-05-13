#include <bits/stdc++.h>
using namespace std;
int main(){
    int x=23;
    int leftshift=x<<4;
    int and = x&12;
    int sum = x|12;
    int xxor = x^12;
    cout<<leftshift<<endl; cout<<and<<endl; cout<<sum<<endl; cout<<xxor<<endl;
    return 0;
}