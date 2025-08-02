#include<iostream>
#include<queue>
using namespace std;
// used to find lowest common ancestor for given two number with binary tree->
 class Node{
     public:
    int data;
    Node*left;
    Node*right;
    Node(int d){
        this->data = d;
        this-> left = NULL;
        this->right= NULL;
    }
 };
 Node* lca(Node* root , int n1, int n2){
    //base case
    if(root==NULL){
        return NULL;
    }
    if(root->data == n1 || root-> data == n2){
      return root;}
      Node* leftAns = lca(root-> left , n1, n2);
      Node* rightAns = lca(root->right , n1, n2);
     
      if(leftAns != NULL && rightAns != NULL){
        return root;
      }
      else if(leftAns != NULL && rightAns == NULL){
        cout<<leftAns->data<<endl;
           return leftAns;
      }else if(leftAns == NULL && rightAns != NULL){
        cout<<rightAns->data<<endl;
        return rightAns;
      }else{
        return NULL;
      }
    }
 
 void buildFromLevelOrder(Node * &root){
    queue<Node *>q;
    cout<<"Enter data for root "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout<<"Enter left node for : "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!= -1){
            temp->left= new Node(leftdata);
            q.push(temp->left);
        }
        cout<<"Enter right node for : "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata != -1){
            temp->right = new Node(rightdata);
            q.push(temp->right);
        }
    }
}
 int main(){
    Node* root = NULL;
    buildFromLevelOrder(root);
  
   // tree data  5  10  12  13  19  40  -1 -1 -1 -1 -1 -1 -1 
   // TREE DATA 12 13 40 5 -1 29 8 9 -1 10 7 2 1 -1 -1 -1 -1  -1 -1 -1 -1 -1 -1
   int n1 = 10;
   int n2= 2;
   Node* ans = NULL;
   ans = lca(root , n1, n2);
   cout<<"lowest common ancester for given numbers "<<n1<< " & "<<n2<<" of given binary tree is : "<<ans->data<<endl;

 }