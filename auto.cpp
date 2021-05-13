#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>A={1,2,3,4,5,6}; int su=0;
    for(auto it:A){
        su+=it;
        cout<<it<<endl;
    }
    cout<<su<<endl;
    return 0;
}