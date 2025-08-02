#include<iostream>
#include<queue>
#include<vector>
#include<map>
using namespace std;
// vertical order traversal of binary tree
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data =d;
        this->left =NULL;
        this->right =NULL;
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
vector<int> verticalorder(Node * root){
    map<int, map<int,vector<int>>>nodes;
    queue<pair<Node*, pair<int,int>>>q;
    vector<int> ans;

    if(root== NULL){
        return ans;
    }
    q.push(make_pair(root, make_pair(0,0)));
    while(!q.empty()){
       pair<Node*, pair<int,int>>temp = q.front();
       q.pop();
       Node* frontNode = temp.first;
       int hd = temp.second.first;
       int lvl =  temp.second.second;
       nodes[hd][lvl].push_back(frontNode-> data);

       if(frontNode -> left)
       q.push(make_pair(frontNode->left , make_pair(hd-1, lvl+1)));

       if(frontNode-> right)
       q.push(make_pair(frontNode->right , make_pair(hd+1, lvl+1)));

    }
    for(auto i: nodes){
        for(auto j: i.second){
           for(auto k: j.second){
            ans.push_back(k);
        } 
    }
    }
    return ans;
}
int main(){
   Node* root;
   buildFromLevelOrder(root);
   // tree data  5  10  12  13  19  40  -1 -1 -1 -1 -1 -1 -1 
   // TREE DATA 12 13 40 5 -1 29 8 9 -1 10 7 2 1 -1 -1 -1 -1  -1 -1 -1 -1 -1 -1
   vector<int>ans;
   ans= verticalorder(root);
   for(auto i: ans){
    cout<<i<<" ";
   }
   cout<<endl;
}