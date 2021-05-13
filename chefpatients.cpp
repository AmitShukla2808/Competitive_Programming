#include <bits/stdc++.h>
#define pi pair<int,int>
using namespace std;

struct compare{
    bool operator()(const pi l, const pi r){
        if(l.first==r.first)
            return l.second > r.second;
        return l.first<r.first;
    }
};

int main() {
	// your code goes here
	int t,i;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> A(n,0);
	    for(i=0;i<n;++i)
	        cin>>A[i];
	    priority_queue<pi,vector<pi>,compare> pq;
	    for(i=0;i<n;++i){
	        pq.push({A[i],i});
	    }
	    //unordered_map<int,int> mp;
	    int ct=1;
	    while(!pq.empty()){
	        int ind= pq.top().second;
	        A[ind]=ct;
	        ct=ct+1;
	        pq.pop();
	    }
	    for(i=0;i<n;++i){
	        cout<<A[i]<<" ";
	    }
	    cout<<"/n";
	}
	return 0;
}
