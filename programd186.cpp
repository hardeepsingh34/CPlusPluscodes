#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this-> data = d;
        this->  left = NULL;
        this-> right =NULL;
    }
};
void solve(Node* root , int k , int &count , vector<int>path){
    // base case
    if(root== NULL)
    return;
    
    path.push_back(root->data);
    // left
    solve(root-> left, k, count, path);
    // right
    solve(root->right, k ,count, path);
    // check for k sum
    int size = path.size();
    int sum = 0;
    for(int i =size-1; i>=0; i--){
        sum += path[i];
        if(sum == k)
        count ++;
    }
    path.pop_back();
}
int sumk(Node* root, int k){
    vector<int> path;
    int count = 0;
    solve(root,k, count, path);
    return count;

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
   int k = 39;
   int ans = sumk(root, k);
   cout<<"number of paths which has sum equal to "<<k<<" are "<<ans<<endl;
}