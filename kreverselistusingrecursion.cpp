#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node* kreverse(Node* head, int k){
    // base case
    if (!head)
        return NULL;
    Node* current = head;
    Node* next = NULL;
    Node* prev = NULL;
    int count = 0;
 
    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
 
    /* next is now a pointer to (k+1)th node
    Recursively call for the list starting from current.
    And make rest of the list as next of first node */
    if (next != NULL)
        head->next = kreverse(next, k);
 
    /* prev is new head of the input list */
    return prev;
}
int main(){
    int n;
    cout<<"Enter the number of elements\n";
    cin>>n;
    cout<<"Enter elements\n";
    Node *head,*curr; int data;
    for(int i=0; i<n; i++){
        cin>>data;
        if(head==NULL){
            Node *nw = new Node();
            nw->next = NULL;
            nw->data = data;
            head = nw;
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
    int k;
    cout<<"Enter the integer k\n";
    cin>>k;
    Node *head2 = kreverse(head,k);
    cout<<"The k reversed linked list is : ";
    while(head2){
        cout<<head2->data<<" ";
        head2 = head2->next;
    }
    cout<<"\n";
    return 0;
}