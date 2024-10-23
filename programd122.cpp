#include<iostream>
using namespace std;
//doubly linked list 
class node{
    public:
    int data;
    node* prev;
    node* next;
    // constructor
    node(int d){
       this-> data= d;
       this ->next= NULL;
       this->prev = NULL;
    }
    ~node(){
        int value =this -> data;
        if(this-> next != NULL){
            this ->next = NULL;
            delete next;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};
void insertAtHead(node* &tail,node* &head , int data){
    if(head == NULL){
        node *temp = new node(data);
        head = temp;
        tail =temp;
    }
    node * temp = new node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void printll(node* head){
    cout<<endl<<"printing linked list "<<endl;
    node* temp= head;
    while(temp != NULL){
        cout<<temp->data<<"  ";
        temp= temp->next;
    }
    cout<<endl<<endl;
}
void printReverse(node* tail){
    cout<<endl<<"print linked list in reverse order "<<endl;
    node* temp = tail;
    while(temp!= NULL){
        cout<<temp->data<<"  ";
        temp = temp->prev;
    }
    cout<<endl<<endl;
}
void insertAtTail(node* &tail, node* &head, int d){
    if(tail == NULL){
        node* temp = new node(d);
       head =temp;
       tail = temp;
    }else{
        node*temp = new node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertAtPosition(node* &tail , node* &head,int position, int d){
    if(position ==1){
        insertAtHead(tail , head , d);
        return;
    }
    int cnt= 1;
    node* curr=head;
    node* pre=NULL;
    while(cnt<position && curr!= NULL){
        pre= curr;
        curr = curr->next;
        cnt++;
    }
    if(curr ==NULL){
        cout<<1;
        insertAtTail(tail, head ,d);
        return;
    }
    node* temp = new node(d);
    temp->next= curr;
    temp->prev = pre;
    pre->next= temp;
    curr->prev= temp;

}
void deleteNode(node* &head ,node* &tail , int position ){
    if(position ==1){
        node* temp = head;
        head = head->next;
        head -> prev = NULL;
        temp ->next = NULL;
        delete temp;
    }
    else{
        //deleting middle element 
        int cnt =1;
        node* curr =head ;
        node* prev = NULL;
    while(cnt<position){
        prev = curr;
        curr = curr->next;
        cnt++;
     }
   if(curr->next ==NULL){
    cout<<1;
        tail = tail->prev;
        curr->prev->next= NULL;
        curr->prev=NULL;
          delete curr;
          return;
    }
     curr->prev-> next = curr->next;
     curr->next->prev = curr->prev;
     curr->next = NULL; 
     curr->prev =NULL;
     delete curr;
    }
}
int main(){
node* node1= new node(39);
node* head = node1;
node*tail  = node1;
insertAtHead(tail, head , 70);
insertAtHead(tail , head , 69);
insertAtHead(tail , head, 653);
insertAtHead(tail, head , 684);
insertAtTail( tail , head , 61);
insertAtTail(tail, head , 1293);
insertAtPosition( tail ,head , 4, 90);
insertAtPosition(tail, head ,10, 11);
deleteNode(head ,tail ,3);
deleteNode(head ,tail ,1);
deleteNode(head ,tail ,7);

//insertAtTail( tail , head , 13);
printll(head);
printReverse(tail);
}