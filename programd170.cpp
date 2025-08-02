#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node * left ;
    node* right;
    node(int d){
        this->data= d;
        this->left = NULL;
        this->right=NULL;
    }
};
class solution{
    public:
    // function to find the height of a binary tree
    int height(node* Node){
        // base case
        if(Node == NULL){
            return 0;
        }
        int left = height(Node->left);
        int right = height(Node-> right);

        int ans = max(left, right)+1;
        return ans;
    }
};
void buildFromLevelOrder(node * &root){
    queue<node *>q;
    cout<<"Enter data for root "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<"Enter left node for : "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!= -1){
            temp->left= new node(leftdata);
            q.push(temp->left);
        }
        cout<<"Enter right node for : "<<temp->data<<endl;
        cout<<"data in temp is "<<temp-> data<<endl;
    
        int rightdata;
        cin>>rightdata;
        if(rightdata != -1){
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }

}
int main(){
node * root = NULL;
solution s;
buildFromLevelOrder(root);
cout<<"Height of given tree is : "<<s.height(root)<<endl;
}