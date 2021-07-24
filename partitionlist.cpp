//Constraints: 1<=n<=10^6, -10^6<=B<=10^6
//Time Complexity: O(N)
//Below code partitions the list in such a way that all values less than B come before values
//greater than or equal to B given that we maintain the order of their occurence

#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *partition(Node *head, int B){
    Node *newhead; bool flag1 = true; Node *ans=NULL,*ans2=NULL;
    Node *midhead; bool flag2 = true;
    while(head){
        if(head->data<B){
            if(flag1){
                newhead = head;
                // The head of min list (values<B)
                ans = head;
                flag1 = false;
                head = head->next;
                continue;
            }
            else{
                newhead->next = head;
                newhead = newhead->next;
                head = head->next;
                continue;
            }
        }
        if(head->data>=B){
            if(flag2){
                midhead = head;
                // The head of max list (values>=B)
                ans2 = head;
                flag2 = false;
                head = head->next;
                continue;
            }
            else{
                midhead->next = head;
                midhead = midhead->next;
                head = head->next;
                continue;
            }
        }
    }
    // In case all elements are greater than or equal to B
    if(ans==NULL){
        return ans2;
    }
    // In case all elements are less than B
    if(ans2==NULL){
        return ans;
    }
    // Appending the end of min list with the head of max list
    midhead->next = NULL;
    newhead->next = ans2;
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
    int B;
    cout<<"Enter the partition\n";
    cin>>B;
    Node *head2 = partition(head,B);
    while(head2){
        cout<<head2->data<<" ";
        head2 = head2->next;
    }
    cout<<"\n";
    return 0;
}