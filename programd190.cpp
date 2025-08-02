#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node* right;
    Node* left;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
class solution{
    public:
    void createMapping(int in[], map<int,int> &nodeToIndex , int n){
       for(int i = 0; i<n; i++){
        nodeToIndex[in[i]] = i;
       }
    }
    Node* solve(int in[], int pre[], int index , int inorderStart, int inorderEnd, int n, map<int,int>&nodeToIndex){
        // base case
        // this si base case listen to me
        //thi sis ohj base case 
        if(index >= n || inorderStart > inorderEnd){
            return NULL;
        }
        int element = pre[index++];
        Node* root = new Node(element);
        int position = nodeToIndex[element];
        //recursive calls

        root->left = solve(in, pre , index, inorderStart , position-1 ,n, nodeToIndex);
        root->right = solve(in ,pre , index , inorderStart, position+1, inorderEnd, nodeToIndex);
        return root;
    }
    Node* buildTree(int in[], int pre[], int n){
        int preorderIndex = 0; 
        map<int, int> nodeToIndex;
        //create nodes to index mapping
        // destructre
        createMapping(in, nodeToIndex, n);

        Node* ans = solve(in, pre ,preorderIndex, 0,1, n-1, nodeToIndex);
        return ans;
    }
    };
    
    void inorder(Node *root ){
      if(root == NULL ){
        return ;
      }
      inorder(root->right);
      cout<<root->data<<" ";
      inorder(root->left);
    }

int main(){
Node* root;
int in[] = {1,2,3,4,5,6};
int pre[] ={4,2,1,3,5,6};
solution s;
root =s.buildTree(in, pre, 6);
} 