#include<iostream>
#include<queue>
using namespace std;
// check weather the given both trees are identical or not :
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this-> data= d;
        this-> left= NULL;
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
class solution{
    public:
    bool isIdentical(Node* r1, Node* r2){
        // base case
        if( r1== NULL && r2 == NULL){
            return true;
        }
         if( r1== NULL && r2 != NULL){
            return false;
        }
         if( r1 != NULL && r2 == NULL){
            return false;
        }
       bool left = isIdentical(r1-> left , r2->left);
       bool right = isIdentical(r1->right, r2-> right);

       bool value= r1->data == r2->data;
       if(left && right && value){
        return true;
       }else{
        return false;
       }
    }
};
int main(){
    Node* root1 = NULL;
    Node* root2= NULL ;
    cout<<"\nenter data for first tree "<<endl;
    buildFromLevelOrder(root1);
    cout<<"\nenter data for second tree"<<endl;
    buildFromLevelOrder(root2);
    // tree data  5  10  12  13  19  40  -1 -1 -1 -1 -1 -1 -1 
    solution s;
   if(s.isIdentical(root1, root2)) {
    cout<<"both the given trees are identical "<<endl;
   }else{
    cout<<"given trees are not identical "<<endl;
   }
}