#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;  int count=0,m=0; bool flag = true;
    cin>>n>>k; set<int>A;
    for(int i=0; i<n; i++){
        int temp=0;
        cin>>temp;
        for(int j=temp; j!=0; j/=10){
            A.insert(j%10);
        }
        if(*(--A.end())!=k){
            flag = false;
        }
        for(auto it = A.begin(); it!=A.end() && m<=k; it++){
            if(*it==m){
                m++;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag==true){
            count++;
        }
        flag = true; m=0;
        A.erase(A.begin(),A.end());
        A.clear();
    }
    cout<<count<<endl;
}