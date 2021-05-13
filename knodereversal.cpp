#include<bits/stdc++.h>
using namespace std;
struct Node{
    int value;
    Node* next;
    Node(int a){                                //structure for Linked List
        value = a;
        next=NULL;
    }
};
void reversenodes(Node* &p, int k){
    Node* x = p; Node* y; int count =0;
    while(p!=NULL && count<=k){
        
    }
}
int main(int argc, char const *argv[])
{   
    cout<<"Enter the number of nodes"<<endl;
    int n; cin>>n; Node *node; Node *p,*m;
    cout<<"Enter the value of k"<<endl;
    int k; cin>>k;
    for(int i=0; i<n; i++){
        int a; cin>>a;
        if(i>0){
            node->next = new Node(a);          //creating successive nodes and linking the new with 
            node = node->next;                 //previous node
        }
        else
        {
            node = new Node(a);  p = node;     //creating root node
        }
    }
    cout<<"Linked List before k node reversal : ";
    for(Node *it = p; it!=NULL; it=it->next){
        cout<<it->value<<" ";
    }
    cout<<"Linked List after k node reversal : ";
    reversenodes(p,k);
    cout<<endl;
    return 0;
}
