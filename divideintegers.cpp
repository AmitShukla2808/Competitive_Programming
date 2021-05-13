//Problem: Divide two integrs without / , * , % operators
//Constraints: INT_MIN<=a,b<=INT_MAX
//Time Complexity:  For brute -> O(a)
//                  For optimised -> O(1)

#include<bits/stdc++.h>
using namespace std;
int brute(int a, int b){
    int sign = (a<0)^(b<0) ? -1 : 1 ;
    int count=-1;
    a=abs(a);
    b=abs(b);
    while(a>=0){
        a-=b;
        count++;
    }
    return count*sign;
}
int optimised(int a, int b){
    int sign = (a<0)^(b<0) ? -1 : 1 ;
    long long int quotient=0,temp=0;
    a=abs(a);
    b=abs(b);
    for(int i=31; i>=0; i--){
        if((int)(b*(pow(2,i)))>=0){
            if((temp+(int)(b*pow(2,i))<=a)){
                temp+=(int)(b*pow(2,i));
                quotient+=(int)pow(2,i);
            }
        }
    }
    return quotient*sign;
}
int main(){
    int a,b;
    cout<<"Enter dividend"<<endl;
    cin>>a;
    cout<<"Enter divisor"<<endl;
    cin>>b;
    if(a<INT_MIN || a>INT_MAX){
        a=INT_MAX;
    }
    if(b<INT_MIN || b>INT_MAX){
        b=INT_MAX;
    }
    int ans1=brute(a,b);
    int ans2=optimised(a,b);
    cout<<"The result is : "<<ans1<<endl;
    cout<<"The result is : "<<ans2<<endl;
}