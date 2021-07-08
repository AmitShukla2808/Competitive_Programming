#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,l;
        cin>>l>>h;
        string g;
        cin>>g;  g+='1'; int flag=0;
        int c=0;
        for(long long int i=0; i<l && h!=0; i++){
            if(g[i]=='0'){
                c++;
            }
            else{
                if(c>=h){
                    flag=1; break;
                }
                else if(2*(h-c)<=h){
                    h=2*(h-c); 
                    c=0;
                }
                c=0;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}