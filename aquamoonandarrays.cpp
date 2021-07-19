#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n; long int sum1=0,sum2=0;
        vector<int>A(n),B(n); 
        vector<pair<int,int>>positive; vector<pair<int,int>>negative;
        for(int i=0; i<n; i++){
            cin>>A[i]; sum1+=A[i];
        }
        for(int i=0; i<n; i++){
            cin>>B[i]; sum2+=B[i];
        }
        if(sum1!=sum2){
            cout<<-1<<"\n";
            continue;
        }
        else{
            for(int i=0; i<n; i++){
                if(B[i]-A[i]>=0){
                    positive.push_back({B[i]-A[i],i});
                }
                else{
                    negative.push_back({B[i]-A[i],i});
                }
            }
        }
        long int operations = 0;
        for(int i=0; i<positive.size(); i++){
            operations+=positive[i].first;
        }
        cout<<operations<<endl;
        int i=0; int j=0; int k=0;
        for(i=0; i<positive.size() && operations!=0;){
            while(positive[i].first!=0 && negative[j].first!=0){
                positive[i].first-=1;
                negative[j].first+=1;
                cout<<negative[j].second+1<<" "<<positive[i].second+1<<"\n";
            }
            if(positive[i].first!=0 && negative[j].first==0){
                j++; 
            }
            else if(negative[j].first!=0 && positive[i].first==0){
                i++;
            }
            else{
                ++j;
                ++i;
            }
        }
    }
    return 0;
}