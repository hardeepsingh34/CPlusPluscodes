#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
int data;
node * left;
node * right;
node(int d){
    this->data =d;
    this->left= NULL;
    this->right= NULL;
}
};
void buildFromLevelOrder(node * &root){
    queue<node *>q;
    cout<<"Enter data for root "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<"Enter left node for : "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!= -1){
            temp->left= new node(leftdata);
            q.push(temp->left);
        }
        cout<<"Enter right node for : "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata != -1){
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }

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
int main(){
node* root = NULL;

buildFromLevelOrder(root);
cout<<"Inorder of given tree is :"<<endl;
inorder(root);
}