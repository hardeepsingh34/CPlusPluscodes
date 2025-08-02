#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data= d;
        this->left= NULL;
        this->right = NULL;
    }
};
class solution{
public:
int height(Node * node){
// base case
if(node == NULL){
    return 0;
}
int left= height(node-> left);
int right = height(node-> right);
int ans= max(left, right)+1;
return ans;
}
int diameter(Node* root){
    // base case
    if(root == NULL){
        return 0;
    }
    int op1= diameter(root->left);
    int op2= diameter(root->right);
    int op3= height(root ->left)+height(root->right)+1;

    int ans= max(op1, max(op2, op3));
    return ans;
}
};
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
Node* root;
<<<<<<< HEAD
solution s; 
buildFromLevelOrder(root);
//sdf
=======
solution s;
buildFromLevelOrder(root);
>>>>>>> 457d28697b29a48769d0a3149b54e9d1b453ecfb
cout<<"diameter of given tree is : "<<s.diameter(root)<<endl;

}