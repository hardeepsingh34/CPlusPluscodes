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
// to insert node in front of linked list 
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
// to insert element at the last of linked list 
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
// to insert element at any position
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
node* reverseDLL(node* head){
    node* pre= NULL;
   node* forward = NULL;
while(head != NULL){
    forward = head ->next;
    head->next = pre;
    head->prev = forward;
    pre =head;
    head = forward;
}
return pre;
}
void reverse(node* &head,node* &tail, node* curr, node* prev= NULL){
//base case 
if(curr == NULL){
 tail = head;
 head = prev;
 return; 
}
node*forward= curr->next;
    reverse(head ,tail , forward ,curr);
    curr->next = prev;
    curr->prev = forward;
}
node* reverse2(node* head,node* &tail){
    //base case 
    if(head-> next == NULL || head ==NULL||tail-> prev == NULL){
        return head ;
    }
    node* h =reverse2(head -> next,tail -> prev );
    head -> next -> next = head ;
    head -> next = NULL;
    tail -> prev -> prev = tail ;
    tail -> prev = NULL;
    return h;
}
/*node* reverse3(node* tail){ 
    //base case 
    if(tail-> prev == NULL || tail ==NULL){
        return tail;
    }
    node* h =reverse3(tail -> prev);
    tail -> prev -> prev = tail ;
    tail -> prev = NULL;   
    return h;
}*/
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

//insertAtTail( tail , head , 13);
printll(head);
//head =reverseDLL(head);
//printll(head);  
//reverse(head, tail,head);
//printll(head);
node* temp =head ;
head=reverse2(head, tail);
tail = temp;
//tail =reverse3(tail);
printReverse(tail);
printll(head);
}