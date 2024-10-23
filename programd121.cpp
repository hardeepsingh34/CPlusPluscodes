#include<iostream>
using namespace std;
// singly linked list 
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
void deletenode(int position, node* &head){
if(position == 1){
    node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
}else{
    node* curr = head;
    node* prev = NULL;
    int cnt =1;
    while(cnt<position){
        prev= curr;
        curr= curr->next;
        cnt++;
    }
    prev->next = curr->next;
    curr->next = NULL;  
    delete curr;
}
}
int main(){
node* node1= new node(10);
node* head = node1;
node* tail = node1;
insertAtHead(head , 16);
insertAtHead(head , 20);
insertAtTail(tail, 40);
insertAtTail(tail, 80);
cout<<"head "<<head->data<<endl;
cout<<"tail "<<tail->data<<endl;
printLL(head);
deletenode(3, head);
printLL(head);
}