//Constraints: 1<=n<=10^7
//Time Complexity: O(N)

#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
bool solve(Node *head){
    Node* slow; Node* fast; stack<int>st;
    slow = fast = head;
    while(fast && fast->next){          // checking if next of fast and fast are not null
        slow = slow->next;
        fast = fast->next->next;
    }
    while(slow!=NULL){                 // pushing data from slow upto end of list in stack
        st.push(slow->data);
        slow = slow->next;
    }
    while(!st.empty()){
        if(head->data == st.top()){     // checking of corresponding values
            st.pop();
            head = head->next;
        }
        else{
            return false;
        }
    }
    return true;
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
    bool ans = solve(head);
    if(ans){
        cout<<"Given List is palindromic\n";
    }
    else{
        cout<<"Not a palindromic List\n";
    }
    return 0;
}