#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long unsigned int A,B;
        scanf("%llud","%llud",&A,&B);
        if(B&(B-1)==0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}