#include<iostream>
#include<vector>
#include<map>
#include<queue>
#include<utility>
using namespace std;
// bottom view of binary tree ;
class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int d){
        this->data= d;
        this->left = NULL;
        this->right = NULL;
    }
};
vector<int> bottomview(Node* root){
  vector<int>ans;
  if(root == NULL){
    return ans;
  }
  map<int, int> topNode;
  queue<pair<Node*, int>>q;

  q.push(make_pair(root,0));

  while(!q.empty()){ 
 
    pair<Node*,int>temp = q.front();
    q.pop();
    Node* frontNode = temp.first;
    int hd = temp.second;
   
    topNode[hd] = frontNode->data;

    if(frontNode->left)
    q.push(make_pair(frontNode->left, hd-1));

    if(frontNode->right)
    q.push(make_pair(frontNode->right, hd+1));
  }
  for(auto i:topNode){
    ans.push_back(i.second);
  }
  return ans;
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
    Node* root= NULL;
    buildFromLevelOrder(root);
    
   // tree data  5  10  12  13  19  40  -1 -1 -1 -1 -1 -1 -1 
   // TREE DATA 12 13 40 5 -1 29 8 9 -1 10 7 2 1 -1 -1 -1 -1  -1 -1 -1 -1 -1 -1
   vector<int>ans;
    ans = bottomview(root);
   for(auto i:ans){
    cout<<i<<" ";
   }
}
