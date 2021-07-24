// A Balanced Binary Tree is one in which for each node, the depth of its left subtree and rightsubtree 
// do not differ by more than 1.


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
int height(Treenode* root){
    if(root==NULL){
        return 0;
    }
    return(1+max(height(root->left),height(root->right)));
}
int solve(Treenode* root){
    if(root==NULL){
        return 1;
    }
    int heightleft = height(root->left);
    int heightright = height(root->right);
    // checking if every node follows the property by calling solve for left and right subtree
    if(abs(heightleft-heightright)<=1 && solve(root->left) && solve(root->right)){
        return 1;
    }
    return 0;
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
    vector<int>A = {1,2,3};
    Treenode* root;
    root = maketree(A);
    int ans = solve(root);
    if(ans!=1){
        cout<<"Not a balanced tree\n";
    }
    else{
        cout<<"Balanced Binary Tree\n";
    }
    return 0;
}