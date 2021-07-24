#include<bits/stdc++.h>
using namespace std;
struct Treenode{
    int data;
    Treenode* left;
    Treenode* right;
    Treenode(int dat){
        data = dat;
        left = NULL;
        right = NULL;
    }
};
int height(Treenode *root){
    if(root==NULL){
        return 0;
    }
    // As height of a node = 1 + max(height of left subtree, height of right subtree)
    return (1+max(height(root->left),height(root->right)));
}
void levelorder(Treenode *root){
    queue<Treenode*>q;
    q.push(root);
    while(!q.empty()){
        if(q.front()!=NULL){
            cout<<q.front()->data<<" ";
            q.push(q.front()->left);
            q.push(q.front()->right);
        }
        q.pop();
    }
    cout<<endl;
}
Treenode* maketree(vector<int>A){
    //creating the root node
    Treenode* root = new Treenode(A[0]);
    //To store children of front node
    queue<Treenode*>q;
    q.push(root); int k = 1,countnodes=0;
    for(int i=1; i<A.size() && !q.empty(); i++){
        if(A[i]!=NULL){
            //If k is odd it means that it is left node that we have to create
            if(k%2!=0){
                q.front()->left = new Treenode(A[i]);
                q.push(q.front()->left);
            }
            else{
                q.front()->right = new Treenode(A[i]);
                q.push(q.front()->right);
            }
        }
        k++;
        countnodes++;
        //If countnodes becomes 2 it means that we have covered the q.front node's children
        if(countnodes==2){
            q.pop();
            countnodes=0;
        }
    }
    return root;
}
int main(){
    vector<int>A = {1,2,3,4,5,6,7,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,8};
    Treenode* root;
    root = maketree(A);
    levelorder(root);
    int heightoftree = height(root);
    cout<<"The height of tree is : "<<heightoftree<<endl;
    return 0;
}