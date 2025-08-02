// Merge two sorted Linked lists
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
//function to merge two sorted linked list 
Node* mergeLL(Node* &head1, Node* &head2){
   Node* temp1 = head1;
   Node* temp2 = head2;
   Node* newhead;
    newhead =temp1;
   Node* pointer = newhead;
   Node* prevpointer = NULL;
    while(pointer->next != NULL && temp2 != NULL){
        cout<<1<<endl;
        if(temp2->data<newhead->data){
            temp2= temp2->next;
            head2->next=newhead;
            newhead= head2;
            head2= temp2;
            prevpointer = newhead;
           
        }
        else if(pointer->data>temp2->data){
            head2= head2->next;
            prevpointer->next= temp2;
            temp2->next = pointer;
            prevpointer= temp2;
            temp2 = head2; 
        }else{
            prevpointer = pointer;
            pointer=pointer->next;  
        }
    }  
    if(temp2!=NULL){
       pointer->next= temp2;
    }
   return newhead ;
}
int main(){
   Node* head1;
   Node* tail;
   Node* head2=new Node(1);
   Node* tail2=head2;
    insertAttail(tail , 1); 
    head1 = tail; 
    insertAttail(tail , 3);
    insertAttail(tail , 4);
    insertAttail(tail , 7);
    insertAttail(tail , 15);
    insertAttail(tail , 17);
    insertAttail(tail , 37);
    cout<<endl<<endl<<"first Linked list is "<<endl;
    printLL(head1);

    insertAttail(tail2, 2);
   
    insertAttail(tail2, 6);
    insertAttail(tail2, 8);
    insertAttail(tail2, 9);
    insertAttail(tail2, 12);
    insertAttail(tail2, 22);
    insertAttail(tail2, 52);
    cout<<endl<<endl<<"second Linked list is "<<endl;
    printLL(head2);
    Node* newhead = mergeLL(head1, head2);
    cout<<endl<<endl<<"merge of first and second Linked list "<<endl;
    printLL(newhead);
}