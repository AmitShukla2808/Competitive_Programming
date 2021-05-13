#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int A,B,C,D,E,F,G,H,area=0,l=0,b=0;
    cout<<"Enter coordinates"<<endl;
    cin>>A>>B>>C>>D>>E>>F>>G>>H;
    if(H>B||F<D||E<C||G>A){
        l = min(G,C)-max(E,A);
        b = min(H,D)-max(B,F);
        area=l*b;
    }
    cout<<area<<endl;
    return 0;
}
