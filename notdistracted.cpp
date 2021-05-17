#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{  
    int t;
    cout<<"Enter the number of test cases"<<endl;
    cin>>t;
    while(t--){
        int n; 
        cout<<"Enter the number of days"<<endl; 
        cin>>n;
        cout<<"Enter the string denoting work"<<endl;
        string task;
        cin>>task; 
        char repeat; set<char>A; repeat=task[0]; A.insert(repeat); int k=0;
        for(int i=1; i<n; i++){
            if(A.find(task[i])!=A.end()){
                if(task[i]!=repeat){
                    cout<<"The student is distracted"<<endl; k=1;break;
                }
            }
            else{
                A.insert(task[i]); repeat=task[i];
            }
        }
        A.clear();
        if(k!=1){
            cout<<"The student is not distracted"<<endl;
        }
    }
    return 0;
}
