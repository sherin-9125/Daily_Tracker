#include<iostream>
#include<vector>
using namespace std;
class Node{
  public:
  int data;
  Node* left;
  Node* right;
  Node(int val){
    data=val;
    left=right=NULL;
  }
};
static int idx=-1;
Node* buildtree(vector<int> preorder){
  idx++;
  if(preorder[idx]==-1){
    return NULL;
  }
  Node* root = new Node(preorder[idx]);
   root->left= buildtree(preorder);
   root->right=buildtree(preorder);
   return root;

}
// traversal-preorder (root,left,ryt)
void preOrder( Node* root){
  if(root==NULL){

    return ;
  }
  cout<<root->data<<" ";
  preOrder(root->left);
  preOrder(root->right);

}
// traversal -inorder(left,root,right)
void inorder( Node* root){
  if(root==NULL){
    return;
  }
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}
// traversal -postorder(left,ryt,root) 
void postorder( Node* root){
  if(root==NULL){
    return;
  }
  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<" ";
}


int main(){
  vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
   Node* root = buildtree(preorder);
  preOrder(root);
  inorder(root);
  postorder(root);
    
   

  return 0;
}