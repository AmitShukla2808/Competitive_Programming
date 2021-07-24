#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *kreverse(Node *head, int k){
    int c = k; Node *join,*join2;
    Node *prev=NULL,*curr=head,*next=NULL; int i=0; Node *ans; join = head;
    while(curr){
        if(i>0){
            join->next = prev;
            join = join2;
        }
        next = NULL;
        prev = NULL;
        c = k;
        while(c--){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            if(c==k-1){
                join2 = curr;
            }
            curr = next;
        }
        if(i==0){
            ans = prev;
            i++;
        }
    }
    if(i>0 && join2!=head){
        join->next = prev;
        join = join2;
    }
    return ans;
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