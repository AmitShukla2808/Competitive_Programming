#include <bits/stdc++.h>
using namespace std;
struct Node{
    int value;
    Node *left;
    Node *right;
    Node (int val){
        value=val;
        left=NULL;
        right=NULL;
    }
};
void levelorder(Node *root){
    queue<Node *>q;
    q.push(root);
    while(!q.empty()){
        if(q.front()!=NULL){
            cout<<q.front()->value<<" ";
            q.push(q.front()->left);
            q.push(q.front()->right);
        }
        q.pop();
    }
}
void preorder(Node *node){
    if(node==NULL){
        return;
    }
    else{
        cout<<node->value<<" ";
    }
    preorder(node->left);
    preorder(node->right);
}
void inorder(Node *node){
    if(node==NULL){
        return;
    }
    inorder(node->left);
    cout<<node->value<<" ";
    inorder(node->right);
}
void postorder(Node *node){
    if(node==NULL){
        return;
    }
    postorder(node->left);
    postorder(node->right);
    cout<<node->value<<" ";
}
int main(){
    int k;
    cin>>k;
    Node *root=new Node(k);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(6);
    root->left->right=new Node(9);
    root->right->left=new Node(5);
    root->right->right=new Node(7);
    cout<<"Preorder Traversal  : ";
    preorder(root);
    cout<<endl;
    cout<<"Inorder Traversal   : ";
    inorder(root);
    cout<<endl;
    cout<<"Postorder Traversal : ";
    postorder(root);
    cout<<endl;
    cout<<"Levelorder Traversal : ";
    levelorder(root);
    cout<<endl;
    return 0;
}