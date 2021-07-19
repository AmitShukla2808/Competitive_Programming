//Constraints: 1<=n<=10^7
//Time Complexity: O(N)

#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node * solve(Node *head){
    Node *nextnode=NULL,*currentnode=head,*prevnode=NULL;
    while(currentnode){
        nextnode = currentnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    return prevnode;
}
int main(){
    int n;
    cout<<"Enter the number of nodes\n";
    cin>>n;
    Node *head = NULL, *curr = NULL;
    cout<<"Enter elements in the list\n";
    for(int i=0; i<n; i++){
        int data;
        cin>>data;
        if(head==NULL){
            Node *nw = new Node();
            head = nw;
            nw->next = NULL;
            nw->data = data;
            curr = nw;
        }
        else{
            Node *nw = new Node();
            nw->next = NULL;
            nw->data = data;
            curr->next = nw;
            curr = curr->next;
        }
    }
    Node *head2 = solve(head);
    cout<<"The reversed Linked list is : ";
    while(head2!=NULL){
        cout<<head2->data<<" ";
        head2 = head2->next;
    }
    cout<<endl;
    return 0;
}