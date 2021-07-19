//Constraints: 1<=n<=10^6
//Time Complexity: O(N)

#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
bool solve(Node *head){
    if(head==NULL){
        return false;
    }
    unordered_map<Node*,int>mp; bool flag = false;
    for(auto it = head; it!=NULL; it = it->next){
        if(mp.find(it)!=mp.end()){
            flag = true;
            break;
        }
        else{
            mp[it]++;
        }
    }
    return flag;
}
int main(){
    int n;
    cout<<"Enter the number of nodes\n";
    cin>>n;
    Node *head = NULL, *curr = NULL; vector<Node*>A(n);
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
            A[i] = nw;
        }
        else{
            Node *nw = new Node();
            nw->next = NULL;
            nw->data = data;
            curr->next = nw;
            curr = curr->next;
            A[i] = nw;
        }
    }
    char ans;
    cout<<"Would you like to add cycle in the list ?\n";
    cout<<"Enter Y for yes and N for no\n";
    cin>>ans;
    if(ans=='Y' || ans=='y'){
    int choice;
    cout<<"Enter any index less than n\n";
    cin>>choice;
    curr->next = A[choice];
    }
    bool answer = solve(head);
    if(answer){
        cout<<"Yes there is a cycle present\n";
    }
    else{
        cout<<"No cycle present\n";
    }
    return 0;
}