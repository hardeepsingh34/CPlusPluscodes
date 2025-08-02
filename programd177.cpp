#include<iostream>
#include<vector>
#include<queue>
using namespace std;
// boundary traversal of tree
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data= d;
        this->left = NULL;
        this->right=NULL;
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
class solution{
    public:
    void traverseleft(Node* root, vector<int>&ans){
      //base case
      if((root==NULL) || root-> right == NULL && root-> left == NULL ){
        return;
      }
      ans.push_back(root->data);
      if(root->left){
        traverseleft(root->left, ans);
      }else{
        traverseleft(root->right, ans);
      }
    }
    void traverseleaf(Node* root, vector<int>&ans){
        // base case
        if(root==NULL){
            return;
        }
        if(root->right== NULL && root->left == NULL){
            ans.push_back(root->data);
            return;
        }
        traverseleaf(root->left, ans);
        traverseleaf(root->right, ans);
    }
    void traverseright(Node* root, vector<int> &ans){
        // base case
        if(root == NULL || root-> right == NULL && root-> left == NULL){
             return;
        }
        if(root->right){
            traverseright(root->right, ans);
        }else{
            traverseright(root->left, ans);
        }
        ans.push_back(root->data);
    }
    vector<int> boundry(Node* root){
        vector<int>ans;
        //base case
        if(root == NULL){
            return ans;
        }
        ans.push_back(root->data);
        
        //print / store left 
        traverseleft(root->left, ans);
          
        //print/ store leaf of left subtree
        traverseleaf(root->left, ans);

        // print/ store leaf of right subtree
        traverseleaf(root->right, ans);

        //print/store right 
        traverseright(root-> right, ans);

        return ans;
    }
};
void printvector(vector<int> v){
    for(int i =0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}
int main(){
       Node * root = NULL;
buildFromLevelOrder(root);
   // tree data  5  10  12  13  19  40  -1 -1 -1 -1 -1 -1 -1 
   // TREE DATA 12 13 40 5 -1 29 8 9 -1 10 7 2 1 -1 -1 -1 -1  -1 -1 -1 -1 -1 -1
   solution s;
   vector<int> ans;
   ans = s.boundry(root);
   printvector(ans);
}