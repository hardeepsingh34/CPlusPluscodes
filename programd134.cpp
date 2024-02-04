// program to add two numbers represented by linked list :
#include<iostream>
using namespace std;
class Node{
public:
int data;
Node* next;
Node(int data){
     this->data = data;
     this->next = NULL;
}
};
void insertAttail(Node* &tail, int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        temp-> next = NULL;
        tail = temp;
    }
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp ;
    temp-> next = NULL;
}
void printLL(Node* &head){
    cout<<endl;
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}
Node* reverseLL(Node* head){
    Node* curr= head;
    Node* prev = NULL;
    Node* nextNode = NULL;
    while(curr != NULL){
        nextNode= curr-> next;
        curr-> next = prev;
        prev= curr;
        curr= nextNode;
    }
    return prev;
}
//fuction to add two numbers :
Node* AddTwoNums(Node* head1, Node* head2){
    //first step reverse both the linked lists :
   Node* temp1= reverseLL(head1);
   Node* temp2= reverseLL(head2);
 
   int carry=0;
   int sum= 0 ;
   int data=0;
   head1= temp1;
   head2= temp2;
   //add both linked lists data and carry :
   while(head1->next != NULL && head2 != NULL){
      sum = head1->data + head2->data + carry;
      head1->data = sum%10;
      carry = sum / 10;
      head1= head1-> next;
      head2 = head2-> next;
   }
     //check if any part of 2nd  list left :
  if(head2!=NULL){
    sum = (head1-> data + head2->data + carry);
    head1-> data=sum%10;
    carry = sum/10;
    if(head2->next != NULL){
    head1->next=head2->next;
    head1= head1->next;
    }
  }
  //check if any part of 1st list left :
  while(head1-> next != NULL){
    sum = head1->data + carry;
    head1->data = sum% 10;
    carry = sum / 10;
    head1 = head1 ->next;
   }
   //check if carry left :
   while(carry!= 0){
    data = carry% 10;
    carry = carry /10;
    Node* temp = new Node(data);
    head1->next = temp;
    head1 = temp;
   }
   //  reverse the final linked list to obtail solution :
   Node* ans = reverseLL(temp1);
   return ans;
}
int main(){ Node* head1;
   Node* tail1;
   Node* head2= NULL;
   Node* tail2=NULL;
    insertAttail(tail1 , 211); 
    head1 = tail1; 
    /*insertAttail(tail1 , 3);
    insertAttail(tail1 , 4);
   insertAttail(tail1 , 7);
    insertAttail(tail1 , 5);
    insertAttail(tail1 , 1);
    insertAttail(tail1 , 7);*/
    cout<<endl<<endl<<"first Linked list is "<<endl;
    printLL(head1);
    
     
     insertAttail(tail2, 2112);
     head2= tail2;
     /*insertAttail(tail2, 2);
   
  insertAttail(tail2, 6);
    insertAttail(tail2, 8);
    insertAttail(tail2, 9);
    insertAttail(tail2, 2);
    insertAttail(tail2, 2);
    insertAttail(tail2, 2);*/
    cout<<endl<<endl<<"second Linked list is "<<endl;
    printLL(head2);
    Node* ans = AddTwoNums(head1 , head2);
    cout<<"sum of given two Linked lists is  :"<<endl;
    printLL(ans);
    cout<<endl;
}