#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    vector<int>ans(1,1);
    ans[0]=1; int carry=0,prod=0;
    for(int i=2; i<=n; i++){
        for(int j=0; j<ans.size(); j++){
            prod=ans[j]*i+carry;
            ans[j]=prod%10;
            carry=prod/10;
        }
        while(carry){
            ans.push_back(carry%10);
            carry/=10;
        }
    }
    for(int i=ans.size()-1; i>=0; i--){
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}
