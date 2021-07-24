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
vector<vector<int>> zigzaglevelorder(Treenode *root){
    queue<Treenode*>q; vector<vector<int>>ans; vector<int>values;
    q.push(root); int power = 0; int k=1;
    while(!q.empty()){
        if(q.front()!=NULL){
            values.push_back(q.front()->data);
            q.push(q.front()->left);
            q.push(q.front()->right);
        }
        k++;
        // Every level has its max number of nodes in order of 1,2,4,8,16..... so on
        if(k>(1<<power) && values.size()){
            k=1;
            if(power%2==0){
                ans.push_back(values);
            }
            else{
                reverse(values.begin(),values.end());
                ans.push_back(values);
            }
            values.clear(); power++;
        }
        q.pop();
    }
    return ans;
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
    vector<int>A = {1,6,2,NULL,NULL,3,NULL};
    Treenode* root;
    root = maketree(A);
    vector<vector<int>>ans;
    ans = zigzaglevelorder(root);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}