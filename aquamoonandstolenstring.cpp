#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<long long int>arr(m);
        for(int i=0; i<n; i++)
        {   string name;
            cin>>name;
            for(int j=0; j<m; j++)
            {
                arr[j]+=name[j]-'a'+1;
            }
        }
        for(int i=0; i<n-1; i++)
        {   string name;
            cin>>name;
            for(int j=0; j<m; j++)
            {
                arr[j]-=name[j]-'a'+1;
            }
        }
        for(int j=0; j<m; j++)
            cout << char(arr[j]+'a'-1);
        cout << endl ;
    }
    return 0;
}