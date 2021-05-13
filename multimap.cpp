#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    multimap<int,int>mp;
    mp.insert(pair<int,int>(1,10));
    mp.insert(pair<int,int>(1,7));
    mp.insert(pair<int,int>(2,8));
    mp.insert(pair<int,int>(1,9));
    for(auto it=mp.begin(); it!=mp.end(); it++){
        cout<<it->second<<endl;
    }
    return 0;
}
