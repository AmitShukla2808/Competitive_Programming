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
void findsum(Treenode* root,vector<vector<int>>&ans,vector<int>&nw, int &s, int su){
    if(!root){
        return;
    }
    su+=root->data;
    nw.push_back(root->data);
    if(su==s && root->left==NULL && root->right==NULL){
        ans.push_back(nw);
    }
    findsum(root->left,ans,nw,s,su);
    findsum(root->right,ans,nw,s,su);
    nw.pop_back();
    su-=nw.back();
    return;
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
        k++; countnodes++;
        if(countnodes==2){
            q.pop();
            countnodes=0;
        }
    }
    return root;
}
int main(){
    vector<int>A = {5,4,8,11,NULL,13,7,7,2,2,NULL,NULL,NULL,NULL,1};
    Treenode* root;
    root = maketree(A);
    int s,su=0;
    cout<<"Enter the sum\n";
    cin>>s;
    vector<int>nw; vector<vector<int>>ans;
    findsum(root,ans,nw,s,su);
    if(ans.size()==0){
        cout<<"No such path exists\n";
    }
    else{
        cout<<"The different paths are\n";
        for(int i=0; i<ans.size(); i++){
            for(int j=0; j<ans[i].size(); j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}