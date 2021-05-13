#include <iostream>
using namespace std;
int main(){
    int n; int su;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        su+=a[i];
    }
    cout<<"Sum is "<<su<<endl;
}