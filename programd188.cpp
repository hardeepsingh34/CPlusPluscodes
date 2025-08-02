#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
// Function to return the maximum sum of non-adjacent nodes
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data = d;
        this->right= NULL;
        this->left = NULL;
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
    pair<int, int > solve(Node* root){
     if(root == NULL){
        pair<int,int>p = make_pair(0,0);
        return p;
     }
     pair<int,int> left = solve(root-> left);
     pair<int, int> right= solve(root->right);

     pair<int, int> res;

     res.first = root->data + left.second + right.second;
     res.second = max(left.first, left.second) + max(right.first , right.second);
     return res;
    }
    int getMax(Node* root){
        pair<int,int> ans = solve(root);
        return max(ans.first , ans.second);
    }
};
int main(){

 Node* root = NULL;
    buildFromLevelOrder(root);
  
   // tree data  5  10  12  13  19  40  -1 -1 -1 -1 -1 -1 -1 
   // TREE DATA 12 13 40 5 -1 29 8 9 -1 10 7 2 1 -1 -1 -1 -1  -1 -1 -1 -1 -1 -1
   solution s;
   int ans =s.getMax(root);
   cout<<"The Maximum sum of Non-adjacent nodes is "<<ans<<endl;

<<<<<<< HEAD
}

=======
}
>>>>>>> 457d28697b29a48769d0a3149b54e9d1b453ecfb
