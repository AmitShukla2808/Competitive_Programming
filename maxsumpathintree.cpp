/* Here we have to find the max sum that can be formed out of values of nodes given we can start 
from anywhere in tree. Simple logic says that max sum from a node = data + lefttree(data) + righttree
data. But as values of nodes can be negative as well thus we check for maximum sum we can make up
out of the combination of the three values*/

#include<bits/stdc++.h>
using namespace std;
struct Treenode{
    int data;
    Treenode* left;
    Treenode* right;
    Treenode(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
int solved(Treenode* root, int su){
    if(!root){
        return 0;
    }
    // for values in left subtree
    int l = solved(root->left,su);
    // for values in right subtree
    int r = solved(root->right,su);
    // Here we check if returned value is negative or not by taking max of max(l,r)+data and data
    int max_branch = max(max(l,r)+root->data,root->data);
    // As min(l,r) can be positive or negative thus we check for it too if increases sum or not
    int top_max = max(max_branch+min(l,r),max_branch);
    su = max(su,top_max);
    return su;
}
Treenode* maketree(vector<int>A,Treenode* root, int i,int n){
    if(i<n){
        if(A[i]==NULL){
            return NULL;
        }
        Treenode* temp = new Treenode(A[i]);
        root = temp;
        root->left = maketree(A,root->left,2*i+1,n);
        root->right = maketree(A,root->right,2*i+2,n);
    }
    return root;
}
int main(){
    vector<int>A = {20,-10,20,NULL,NULL,-20,-30};
    Treenode* root = maketree(A,root,0,A.size());
    int su,ans;
    ans = solved(root,su);
    cout<<"The maximum sum path is : "<<ans<<endl;
    return 0;
}