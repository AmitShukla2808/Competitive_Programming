//This Program is an introduction and explanatory for uses of virtual functions and implementation
//of inheritance(single level inheritance) in C++

#include<bits/stdc++.h>
using namespace std;
class Person{
   public: string name; int age;
   virtual void getdata(){

   }
   virtual void putdata(){

   }
};
class Professor: public Person{
    public: 
    int publications;
    public:
    void getdata(){
        cout<<"Enter the name of Professor"<<endl;
        cin>>name;
        cout<<"Enter the age of Professor"<<endl;
        cin>>age;
        cout<<"Enter the publication number of Professor"<<endl;
        cin>>publications;
    }
    void putdata(){
        static int cur_id=1;
        cout<<"Name : Prof. "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Publication number : "<<publications<<endl;
        cout<<"Current ID : "<<cur_id<<endl;
        cur_id++;
    }
    
};
class Student: public Person{
    public: 
    int a[6];
    public:
    void getdata(){
       cout<<"Enter the name of student"<<endl;
       cin>>name;
       cout<<"Enter the age of the student"<<endl;
       cin>>age;
       cout<<"Enter the marks of the student in all subjects"<<endl;
       for(int i=0; i<6; i++){
           cin>>a[i];
        }
    }
    void putdata(){
        static int cur_id=1; int sum=0;
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        for(int i=0; i<6; i++){
           sum+=a[i];
        }
        cout<<"Total marks : "<<sum<<endl;
        cout<<"Current ID : "<<cur_id<<endl;
        cur_id++;
    }
    
};
int main(){

    int n, val;
    cout<<"Enter the number of entries"<<endl;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];
    for(int i = 0;i < n;i++){
        cout<<"Enter value type for new entry"<<endl;
        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor();
        }
        else {
            per[i] = new Student(); // Else the current object is of type Student
        }
        per[i]->getdata(); // Get the data from the user.

    }
    cout<<"\t\tDatabase Record\n"<<endl;
    for(int i=0;i<n;i++)
    {   per[i]->putdata();  // Print the required output for each object.
        cout<<endl; 
    }
    return 0;

}