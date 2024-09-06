#include<iostream>
#include<utility>
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

}