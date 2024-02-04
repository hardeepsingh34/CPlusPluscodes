#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
       this-> data= data;
       this-> next = NULL;
    }
};
void insertAttail(Node* &tail, int data){
    if(tail== NULL){
        Node* temp = new Node(data);
        tail = temp;
        temp->next = NULL;
    }
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
    temp->next = NULL;
}
void printLL(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}
Node* mid(Node* head){
    Node* slow=head;
    Node* fast=head->next;
    while(fast != NULL && fast->next !=NULL){
        fast = fast->next->next;
        slow = slow ->next;
    }
    return slow;
}
Node* mergeLL(Node* head1, Node* head2){
    
}
int main(){
   Node* head1=NULL;
   Node* tail=NULL;
   Node* head2=new Node(1);
   Node* tail2=head2;
    insertAttail(tail , 1); 
    head1 = tail; 
    insertAttail(tail , 3);
    insertAttail(tail , 4);
    insertAttail(tail , 7);
    insertAttail(tail , 15);
    insertAttail(tail , 1);
    insertAttail(tail , 7);
    cout<<endl<<endl<<"first Linked list is "<<endl;
    printLL(head1);

    insertAttail(tail2, 2);
   
    insertAttail(tail2, 6);
    insertAttail(tail2, 8);
    insertAttail(tail2, 9);
    insertAttail(tail2, 12);
    insertAttail(tail2, 2);
    insertAttail(tail2, 5);
    cout<<endl<<endl<<"second Linked list is "<<endl;
    printLL(head2);
    Node* temp = mid(head2);
    cout<<endl<<"mid is "<<temp->data<<endl;

}