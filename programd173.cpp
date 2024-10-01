#include<iostream>
#include<utility>
#include<queue>
using namespace std;
// more optimized solution for binary tree balancing
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this-> data= d;
        this-> left= NULL;
        this-> right = NULL;
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
pair<bool,int> isBalancedFast(Node* root){
    // base case
    if(root== NULL){
        pair<bool,int>p = make_pair(true, 0);
        return p;
    }
    pair<int,int> left = isBalancedFast(root-> left);
    pair<int , int >  right = isBalancedFast(root-> right);

    bool leftAns = left.first;
    bool rightAns= right.first;

    bool diff= (left.second - right.second)<=1;

    pair<bool,int>ans;
    ans.second = max( left.second, right.second)+1;

    if(leftAns && rightAns && diff){
        ans.first= true;
    }else{
        ans.first = false;
    }
    return ans;
}
bool isBalanced(Node* root){
     return isBalancedFast(root).first;
}
int main(){
    Node* root= NULL;
    buildFromLevelOrder(root);
    // tree data  5  10  12  13  19  40  -1 -1 -1 -1 -1 -1 -1 
    if(isBalanced(root)){
        cout<<"given tree is balanced tree "<<endl;
    }else{
        cout<<"given tree is not balanced "<<endl;
    }
}