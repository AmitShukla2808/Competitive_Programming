#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>& A,int m){
  int i,n=A.size(),ans=0;
  vector<int> B(m,0);
  for(i=0;i<n;++i)
    ++B[A[i]%m];
  ans+=(B[0]*(B[0]-1))/2;
  for(i=1;i<m-i;++i)
    ans+=B[i]*B[m-i];
  if(m%2==0)
    ans+=(B[m/2]*(B[m/2]-1))/2;
  return ans;
}
int main(int argc, char const *argv[])
{
  int n,m,i;
  cout<<"Enter the number of the elements\n";
  cin>>n;
  cout<<"Enter the elements of the array\n";
  vector<int> A(n);
  for(i=0;i<n;++i)
    cin>>A[i];
  cout<<"Enter the number m\n";
  cin>>m;
  int ans= solve(A,m);
  cout<<"Total number of pairs divisible by "<<m<<" is "<<ans<<endl;
  return 0;
}
