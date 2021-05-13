#include <bits/stdc++.h>
using namespace std;

void staircase(int n) {
    int p=n-1; int h=1; int m=0;
for(int i=0; i<n;){
    if(p>0){
        cout<<" ";
        --i; p--;
    }
    else{
        if(h>0){
            cout<<"#";
            --i; h--;
        }
    }
    ++i; 
    if(h==0 && p==0){
        i=i+1; ++m;
        h=1+m;
        p=n-1-m; cout<<endl;
    }
} cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of stair"<<endl;
    cin>>n;
    staircase(n);
}
