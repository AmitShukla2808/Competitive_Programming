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
void leftview(Treenode* root,vector<int>&ans,int &level_vis,int level){
    if(!root){
        return;
    }
    if(level_vis<level){
        ans.push_back(root->data);
        level_vis = level;
    }
    leftview(root->left,ans,level_vis,level+1);
    leftview(root->right,ans,level_vis,level+1);
}
Treenode* maketree(vector<int>A){
    Treenode* root = new Treenode(A[0]);
    queue<Treenode*>q;
    q.push(root); int k=1,countnodes=0;
    for(int i=1; i<A.size() && !q.empty(); i++){
        if(A[i]!=NULL){
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
        if(countnodes==2){
            countnodes=0;
            q.pop();
        }
    }
    return root;
}
int main(){
    vector<int>A = {1,2,3,NULL,4,NULL,NULL,NULL,5};
    Treenode* root = maketree(A);
    vector<int>ans;
    int level_vis=0,level=1;
    leftview(root,ans,level_vis,level);
    cout<<"The left view of the tree is : ";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    return 0;
}