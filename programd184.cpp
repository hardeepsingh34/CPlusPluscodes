#include<iostream>
#include<algorithm>
#include<climits>
#include<queue>
using namespace std;
// sum of the longest bloodline of a binary tree
class Node{
    public:
    int data;
    Node*left;
    Node* right;
    Node(int d){
        this->data = d;
        this-> right = NULL;
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
void solve(Node* root, int sum, int &maxsum, int len, int &maxlen){
    //base case
    if(root == NULL){
        if(len > maxlen){
            maxlen = len;
            maxsum = sum;
        }else if(len == maxlen){
            maxsum = max(sum,maxsum);
            // cout<<maxsum<<endl;
        }
        return;
    }
    sum = sum+root->data;
    solve(root-> left, sum, maxsum, len+1 , maxlen);
    solve(root->right, sum, maxsum, len+1 , maxlen);
}
int sumofRootToLeafPath(Node* root){
    int len =0;
    int maxlen= 0;
    int sum = 0;
    int maxsum = INT_MIN;

    solve(root, sum , maxsum, len, maxlen);
    return maxsum; 
}
int main(){
    Node* root = NULL;
    buildFromLevelOrder(root);
    int sum;
   // tree data  5  10  12  13  19  40  -1 -1 -1 -1 -1 -1 -1 
   // TREE DATA 12 13 40 5 -1 29 8 9 -1 10 7 2 1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
    sum = sumofRootToLeafPath(root);
    cout<<"sum of longest bloodline of given binary tree is : "<<sum<<endl;

}