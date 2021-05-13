# include <bits/stdc++.h>
using namespace std;
int pairs1(vector<int>B){
    int c=0;
    for(int i=0; i<B.size(); ++i){
        for(int j=0; j<i;++j){
            if(B[i]+B[j]<(B[i]*B[j]))
                c++;
              
        }
    }
    return c;
}

int pairs2(vector<int>B)
{
    int counttwo=0; int countothers=0;
    for(int i=0; i<B.size(); i++){
        if(B[i]!=0 && B[i]!=1){
            if(B[i]==2)
               counttwo++;
            else
               countothers++;
            
        }
    }
    int c=0; c= (counttwo*countothers) + (countothers*(countothers-1))/2;
    return c;
}

int main(int argc, char const *argv[])
{
    int n; cin>>n;
    vector<int>A(n);
    for(int i=0; i<n; i++){
        cin>>A[i];
    }

    int c1=pairs1(A);
    int c2=pairs2(A);
    cout<<c1<<endl;
    cout<<c2<<endl;
}
