#include<iostream>
#include<queue>
#include<vector>
using namespace std;
// left traversal of binary tree
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data= d;
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
            q.push(temp->right);;
        }
    }

}
void solve(Node* root, vector<int> &ans,  int level ){
    // base case
    if(root== NULL)
    return;

    // we entered into new level
    if(level == ans.size())
    ans.push_back(root->data);
    
    solve(root->left, ans, level+1);
    solve(root->right, ans, level+1);
}
vector<int> leftview(Node* root){
    vector<int>ans;
    solve(root, ans, 0);
    return ans;
}
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
   vector<int> ans;
   ans = leftview(root);
   printvector(ans);
<<<<<<< HEAD
 }   
=======
 }
>>>>>>> 457d28697b29a48769d0a3149b54e9d1b453ecfb
