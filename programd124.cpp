#include<iostream>
using namespace std;
// singly linked list 
//reverse a linked list
class node{
    public:
    int data;
    node* next;
    // constructor
    node(int data){
        this->data= data;
        this->next= NULL;
    }
    ~node(){
        int value =this->data;
        if(this->next != NULL){
            this->next = NULL;
            delete next;
        }
        cout<<"memory is free for data "<< value<<endl;
    }
};
void insertAtHead(node* &head, int data){
    node* temp = new node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(node* &tail , int data){
    node* temp= new node(data);
    tail->next = temp;
    tail = temp;
}
void printLL(node*head){
node* temp = head;
while(temp != NULL){
    cout<<temp->data<<"  ";
temp = temp->next;
}cout<<endl;
}
void reverseLL(node* &head, node* &tail){
node* prev =NULL;
node* curr = head;
node* forward = NULL;
while(curr!=NULL){
     forward =curr-> next; 
    curr->next = prev;
    prev = curr;
    curr = forward;
}
node*temp = head;
head =tail;
tail =head;
}
void recursiveReverse(node* &head,node* &tail, node *curr, node * prev=NULL ){
  if(curr==NULL){
    tail =head ;
    head = prev;
    return;
  }
  node* forward= curr->next;  
  recursiveReverse(head ,tail, forward , curr);
  curr->next = prev;
}
node* reverse(node * head){
    // base case 
    if(head == NULL || head-> next ==NULL){
        return head;
    }
    printLL(head);
    node *chotahead = reverse(head->next);
    printLL(head);
    head ->next->next= head;
    head->next = NULL;
    return chotahead;
}
// to remove duplicates from a sorted list
node * removeDuplicates(node *head)
{
    if(head == NULL){
        return NULL;
    }
    node* temp = head;
    while(temp->next !=NULL){
      if((temp->data == temp-> next->data) && temp-> next != NULL){
         node* tempNext = temp->next->next;
            node* nodeToDelete= temp-> next;
            delete (nodeToDelete); 
            temp->next = tempNext;
            cout<<temp->data;
        }else{
            cout<<1;
            cout<<head->data;
            temp= temp-> next;
        }
        cout<<1;
    }
    cout<<9;
    cout<<head->data;
  return head;
}
int main(){
node* node1= new node(10);
node* head = node1;
node* tail = node1;
insertAtHead(head , 16);
insertAtHead(head , 20);
insertAtTail(tail, 40);
insertAtTail(tail, 40);
insertAtTail(tail, 80);
//printLL(head);
//reverseLL(head,tail);23 
//printLL(head);
//recursiveReverse(head ,tail, head);
printLL(head);
cout<<endl;
head =reverse(head);
printLL(head);
head = removeDuplicates(head);
cout<<"head data"<<head->data;
printLL(head);
}
                