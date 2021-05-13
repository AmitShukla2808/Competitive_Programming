#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int N; 
        cin>>N;
        vector<pair<int,int>>A,B;
        for(int i=0; i<N; i++){
            int v;
            cin>>v;
            A.push_back({i+1,v});
        }
        B.push_back(A[0]);
        B.push_back(A[1]);
        int len=B.size(),ans=1;
        if(N==2){
            cout<<"1"<<endl; continue;
        }
        for(int i=2; i<N; i++){
            while(B.size()>=2){
                double s1 = ((double)B[len-1].second-(double)B[len-2].second)/((double)B[len-1].first-(double)B[len-2].first);
                double s2 = ((double)A[i].second-(double)B[len-1].second)/((double)A[i].first-(double)B[len-1].first);
                if(s1<=s2){
                    B.pop_back();
                    len--;
                }
                else{
                    break;
                }
            }
            B.push_back(A[i]); len++;
            ans=max(ans,B[len-1].first-B[len-2].first);
        }
        cout<<ans<<endl;
    }
    return 0;
}