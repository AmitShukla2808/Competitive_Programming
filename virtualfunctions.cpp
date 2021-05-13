// Usage and implementation of Virtual functions

#include<bits/stdc++.h>
using namespace std;
class sumfind{
    public: 
        int a,b;
    public :
        sumfind(int r , int s){
        a=r;
        b=s;
    }
    sumfind calsum(sumfind obj){
        sumfind res = sumfind(0,0);
        res.a=2*(obj.a);
        res.b=3*(obj.b);
        return res;
    }
    void print(){
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    sumfind c = sumfind(4,5);
    sumfind ans = c.calsum(c);
    ans.print();
    return 0;
}