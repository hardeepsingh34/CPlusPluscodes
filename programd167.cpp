#include<iostream>
using namespace std;
// inorder postorder preorder:-
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data =d;
        this-> left = NULL;
        this-> right= NULL;
    }  
};
node* buildTree(node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>> data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"enter data for insrerting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}
void inorder(node* root){
  // base case
  if(root == NULL){
    return ;
  }
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}
void preorder(node* root){
    // base case
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    // base case
    if(root== NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
node * root = NULL;
root =buildTree(root);
cout<<"preooder of given tree is :"<<endl;
preorder(root);
cout<<"\ninorder of given tree is :"<<endl;
inorder(root);
cout<<"\npostorder of given tree is :"<<endl;
postorder(root);
}