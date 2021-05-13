//Constraints: 1<=n<=1000 , -10^6<=A[i]<=10^6
//Time Complexity: O(n^2)

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the numbers in the map"<<endl;
    int i=0;  unordered_map<int,int>mp; unordered_map<int,unordered_set<int>>mp2; 
    int num=0; int c=0; int k=0;
    for(i=0; i<n; i++){
        int temp;
        cin>>temp;
        mp[temp]++;
    }
    for(auto it = mp.begin(); it!=mp.end(); it++){
        num=it->first;
        for(auto ite = mp.begin(); ite!=mp.end(); ite++){
            if(mp.find(num-ite->first)!=mp.end()){
                if(num==2*(ite->first) && mp[ite->first]>1){
                    if(mp2[num].find(ite->first)==mp2[num].end()){
                        mp2[num].insert(ite->first);
                        c++; k=1;
                    }
                }
                if(num-ite->first!=ite->first){
                    if(mp2[num].find(ite->first)==mp2[num].end()){
                        mp2[num].insert(ite->first);
                        mp2[num].insert(num-ite->first);
                        c++; k=1;
                    }
                }
            }
            if(k==1){
                cout<<"("<<ite->first<<","<<num-ite->first<<")"<<" : "<<num<<endl;
                k=0;
            }
        }
    }
    cout<<"Total such pairs are : "<<c<<endl;
    return 0;
}
