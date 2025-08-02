#include<iostream>
#include<algorithm>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data = d;
        this->left =NULL;
        this->right= NULL;
    }
};
class solution{
    public:
    int findPosition(int in[] , int element , int n){
        for( int i =0; i<n; i++){
          if(in[i] == element)
          return i;
        }
        return -1;
    }
    Node* solve(int in[], int pre[] , int &index ,int inorderStart , int inorderEnd, int n){
        //base case
        if(index>= n || inorderStart>inorderEnd){
            return NULL;
        }
        int element = pre[index++];
        Node* root =new Node(element);
        int position = findPosition(in, element, n);

        //recursive calls
        root->left = solve(in, pre , index , inorderStart, position-1, n);
        root->right = solve(in, pre, index , position+1, inorderEnd, n);

        return root;
    }
    Node* buildTree(int in[] , int pre[] , int n){
        int preorderIndex = 0; 
        Node* ans = solve(in , pre , preorderIndex,0, n-1,n);
        return ans;
    }
};
void inorder(Node* root){
    if(root == NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root-> right);
}
int main(){
Node * root ;
int in[] = {1,6,8,7};
int pre[] ={1,6,7,8};

solution s;
root =s.buildTree(in, pre, 4);
inorder(root);
}