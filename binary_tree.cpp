#include <iostream>
using namespace std;
struct tree{
    long data;
    struct tree *left;
    struct tree *right;
};
int node =1, lev;
struct tree *bt =NULL;
struct tree* insert(struct tree *bt , long no){
    cout<<3;
    if(bt == NULL){
        cout<<4;
        bt-> data = no;
      bt ->left = bt-> right  = NULL;
      cout<<0; 
    }else{
        cout <<1;
        if(no<bt->data)
        bt->left = insert(bt-> left, no);
        else if (no>bt->data){
            bt-> right = insert(bt->right , no);
        }else if(no == bt-> data){
              cout<<"Duplicates nodes: program exited "<<endl;
            exit(0);
        }}
        cout<<5;
        return bt;
}
void node_count(struct tree* bt){
    if(bt!=NULL)
    {
        if(bt->left!= NULL){
            node++;
            node_count(bt->left);
        }
        if(bt->right!=NULL){
            node++;
            node_count(bt->right);
        }
    }
}
void lev_count(struct tree* bt){
    if(bt != NULL){
        if((bt->left == NULL)&&(bt->right==NULL))
        lev++;
        else
        lev_count(bt->left);
        lev_count(bt->right);
        }
    }
int main()
{
    long no;
    
    cout<<"Enter the nodes of tree in preorder: and 0 to quit"<<endl;
    char ch = 'y';
    cin>>no;
    while(no != 0){
        cout<<1;
        insert(bt , no);
        cout<<2;
        cin>>no;
        cout<<"hello"<<endl;
        if(no == 0){
            cout<<"  number is zero"<<endl;
            exit ;
        }
    }
    node_count(bt);
    cout<<"The tree contains "<<node<<" nodes"<<endl;
    lev_count(bt);
    cout<<"The tree contains "<<lev<<" leaf nodes"<<endl;
    return 0;
}



