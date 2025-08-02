#include<iostream>
#include<queue>
#include<limits.h>
#include<algorithm>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this-> data = d;
        this->left = NULL;
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
Node* solve(Node* root, int &k, int node){
    //base case
    if(root == NULL){
        return NULL;
    }
    if(root->data == node){
        return root;
    }
    Node* leftans = solve(root->left ,k ,node);
    Node* rightans = solve(root->right , k, node);

    //wapas
    if(leftans != NULL  && rightans == NULL){
        k--;
        if(k<= 0){
            // answer lock
            k = INT_MAX;
            return root;
        }
        return leftans;
    }
     if(leftans == NULL  && rightans != NULL){
        k--;
        if(k<= 0){
            // answer lock
            k = INT_MAX;
            return root;
        }
        return rightans;
    }
    return NULL;
}
int kthAncestor(Node* root , int k ,int node){
    Node* ans= solve(root, k, node);
    if(ans==NULL || ans -> data == node)
    return -1;
    else
    return ans->data;
    
}
int main(){
 Node* root = NULL;
    buildFromLevelOrder(root);
  
   // tree data  5  10  12  13  19  40  -1 -1 -1 -1 -1 -1 -1 
   // TREE DATA 12 13 40 5 -1 29 8 9 -1 10 7 2 1 -1 -1 -1 -1  -1 -1 -1 -1 -1 -1
   int node= 1;
   int k = 2;
   int ans = kthAncestor(root, k, node);
   cout<<k<<"nd Ancestor of node "<<node<<" is "<<ans<<endl;
}