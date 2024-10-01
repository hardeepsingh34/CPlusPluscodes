#include<iostream>
#include<vector>
#include<queue>
using namespace std;
// zig-zag traversal
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data = d;
        this-> left = NULL;
        this->right = NULL;
    }
};
void printvector(vector<int>v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" "; 
    }
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
vector<int> zigzagTraversal(Node* root){
    vector<int>result;
    if(root== NULL)
    return result;
    cout<<"i am in zigzag"<<endl;
    queue<Node*> q;
    q.push(root);

    bool leftToRight= true;

    while(! q.empty()){
        int size = q.size();
        vector<int> ans(size);

        // level Process
        for(int i =0; i<size; i++){
            Node* frontNode = q.front();
            q.pop();

            int index = leftToRight? i:size-i-1;
            ans[index] = frontNode->data;

            if(frontNode-> left)
            q.push(frontNode->left);

            if(frontNode -> right)
            q.push(frontNode -> right);
        }
        // direction change karni hai
        leftToRight= !leftToRight;
        for(auto i:ans){
            cout<<i<<" ";
            result.push_back(i);
        }
    }
    return result;
} 
int main(){
Node* root;
buildFromLevelOrder(root);
vector<int>v;
v= zigzagTraversal(root);
cout<<"zigzag traversal of given :"<<endl;
cout<<v[0]<<endl;
printvector(v);
}