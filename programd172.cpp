#include<iostream>
#include<queue>
using namespace std;
//given a binary tree , find if it's height balanced or not.
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node( int d){
        this-> data= d;
        this->left= NULL;
        this->right= NULL;
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
 int height(Node* node){
        // base case
        if(node == NULL){
            return 0;
        }
        int left = height(node->left);
        int right = height(node-> right);

        int ans = max(left, right)+1;
<<<<<<< HEAD
        // ALTU FALTU AYI BLA KO TAL TU 
=======
>>>>>>> 457d28697b29a48769d0a3149b54e9d1b453ecfb
        return ans;
    }
bool isbalanced(Node* root){
    // base case
    if(root == NULL){
        return true;
    }
    bool left= isbalanced(root->left);
    bool right = isbalanced(root-> right);

    bool diff = (height(root-> left) - height(root->right))<=1;
    
     if(left && right && diff){
        return 1;
     }else{
        return false;
     }
}
int main(){
       Node* root= NULL;
    buildFromLevelOrder(root);
    // tree data  5  10  12  13  19  40  -1 -1 -1 -1 -1 -1 -1 
    if(isbalanced(root)){
        cout<<"given tree is balanced tree "<<endl;
    }else{
        cout<<"given tree is not balanced "<<endl;
    }
}