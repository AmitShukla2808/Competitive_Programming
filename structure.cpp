#include <bits/stdc++.h>
using namespace std;
struct info              // structure declaration with stucture tag : info  
{
    string name; int roll;     // Two attributes of info : name and roll (string and integer)
};
int main(){
    string n; int m;
    cin>>n>>m;
    info myfo;            // declaring variable with datatype info having two attributes (name and roll)
    myfo.name=n;
    myfo.roll=m;                // entering vaues in attributes of myfo
    info *mylo=&myfo;           // making pointer of myfo ( the info type variable)
    cout<<mylo<<endl;
    cout<<(mylo->name)<<" "<<mylo->roll<<endl; // printing values of myfo via pointer mylo
    cout<<myfo.name<<" "<<myfo.roll<<endl;     // printing values of myfo directly via variable myfo
    info hell;
    hell=myfo;                    // Assigning new variable of info type with values of myfo
    cout<<hell.name<<" "<<hell.roll<<endl;
    return 0;
}
