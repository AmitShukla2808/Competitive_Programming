#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
       long long int N,E,H,A,B,C;unsigned long long int z=0,n=0,m,maxi=LONG_LONG_MAX,temp=0,temp1=0,temp2=0; 
        long long int q=0,x=0,y=0;
        cin>>N>>E>>H>>A>>B>>C;
        vector<unsigned long long int>M(3,0);
        vector<unsigned long long int>Q(3,0);
        vector<unsigned long long int>P(3,0);
        M[0]=A; M[1]=B; M[2]=C;
        Q[0]=E/2;
        Q[1]=H/3;
        if(E-2*Q[0]>0 && H-3*Q[1]>0){
            Q[2]=((E-2*Q[0])+(H-3*Q[1]))/2;
        }
        else{
            Q[2]=0;
        }    
        P[2]=min(E,H);
        if(min(E,H)==E){
            P[0]=0;
            P[1]=(H-E)/3;
        }
        else{
            P[0]=(E-H)/2;
            P[1]=0;
        }
        x=Q[0]+Q[1]+Q[2];
        y=P[0]+P[1]+P[2];
        for(int i=0; i<2; i++){
            for(int j=i+1; j<3; j++){
                if(M[i]>M[j]){
                    temp=M[i];
                    M[i]=M[j];
                    M[j]=temp;
                    temp1=P[i];
                    P[i]=P[j];
                    P[j]=temp1;
                    temp2=Q[i];
                    Q[i]=Q[j];
                    Q[j]=temp2;
                }
            }
        }
        if(x>=N || y>=N){
            if(x==N){
                maxi=min(maxi,Q[0]*M[0]+Q[1]*M[1]+Q[2]*M[2]);
            }
            if(y==N){
                maxi=min(maxi,P[0]*M[0]+P[1]*M[1]+P[2]*M[2]);
            }
            if(x>N){
                for(int i=0; i<3,n<=N; i++){
                    z+=M[i]*Q[i];
                    n+=Q[i];
                    q=n-N;
                    m=M[i];
                }
                z-=m*q;
                maxi=min(maxi,z);
            }
            z=0; n=0;
            if(y>N){
                for(int i=0; i<3,n<=N; i++){
                    z+=M[i]*P[i];
                    n+=P[i];
                    q=n-N;
                    m=M[i];
                }
                z-=m*q;
                maxi=min(maxi,z);
            }
            cout<<maxi<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}