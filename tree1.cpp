// program to find number of nodes and leaf nodes in the given tree.
#include<iostream>
using namespace std;
struct tree{
    long data;
    struct tree *left;
    struct tree *right;
};
int node = 1, lev;
struct tree *bt = NULL;
// prototype of functions;
struct tree *insert(struct tree *bt , long no);
void lev_count(struct tree*bt);
void node_count(struct tree*bt);
int main(){
  long no;

  cout<<"Enter the nodes of tree in preorder : and 0 to quit "<<endl;
  cin>>no;
  while(no != 0){
    bt = insert( bt, no);
    cin>>no;
  } 
  node_count(bt);
  cout<<"The tree contains "<<node<<" nodes"<<endl;
  lev_count(bt);
  cout<<"The tree contains "<<lev<<" leaf nodes"<<endl;
  }
  struct tree *insert(struct tree *bt ,long no){
    if(bt == NULL){
      bt->left=bt-> right = NULL;     
      cout<<"hello world "<<endl;
    }   }  