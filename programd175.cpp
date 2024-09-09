#include<iostream>
#include<utility>
#include<queue>
using namespace std;
class Node{
   public:
   int data;
   Node* left;
   Node* right;
   Node(int d){
    this->data= d;
    this-> left = NULL;
    this-> right= NULL;
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
pair<bool, int> isSumTreeFast(Node* root){
    // base case
    if( root== NULL){
        pair<bool, int>p = make_pair(true, 0);
        return p;
    }
    // leaf node
    if(root -> right == NULL && root -> left == NULL){
        pair<bool,int> p = make_pair(true, root-> data);
        return p;
    }
    pair<bool, int> leftAns= isSumTreeFast(root->left);
    pair<bool, int>rightAns = isSumTreeFast(root->right);

    bool isLeftSumtree = leftAns.first;
    bool isrightSumtree = rightAns.first;

    bool condn = root->data == isLeftSumtree + isrightSumtree;

    pair<bool,int>ans;
    
    if(isLeftSumtree && isrightSumtree && condn){
         ans.first= true;
         ans.second = root-> data + isLeftSumtree + isrightSumtree;
    }else{
        ans.first= false;
    }
    return ans;
}
int main(){
Node * root = NULL;
buildFromLevelOrder(root);
   // tree data  5  10  12  13  19  40  -1 -1 -1 -1 -1 -1 -1 
pair<bool,int> p = isSumTreeFast(root);
cout<<p.first<<" "<<p.second<<endl;
}