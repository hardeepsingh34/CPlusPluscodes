#include<iostream>
using namespace std;
// singly linked list 
// sorting 0s, 1s ,2s:
class Node{
    public:
    int data;
    Node* next;
    // constructor
    Node(int data){
        this->data= data;
        this->next= NULL;
    }
    ~Node(){
        int value =this->data;
        if(this->next != NULL){
            this->next = NULL;
            delete next;
        }
        cout<<"memory is free for data "<< value<<endl;
    }
};
void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node* &tail , int data){
    Node* temp= new Node(data);
    tail->next = temp;
    tail = temp;
}
void printLL(Node*head){
Node* temp = head;
while(temp != NULL){
    cout<<temp->data<<"  ";
temp = temp->next;
}cout<<endl;
}
// normal method for sorting
Node* sortlist( Node* head){
    Node* temp= head;
    int zerocount=0 , onecount=0, twocount=0;
    while( temp != NULL){
        if(temp-> data== 0){
           zerocount++;
        }
         if(temp-> data==1){
            onecount++;
        }
        if( temp->data == 2){
            twocount++;
        }
        temp = temp->next;
    }
    temp = head;
    while(temp != NULL){
         if(zerocount != 0){
            temp->data = 0;
            zerocount--;
         }else if(onecount != 0){
            temp->data = 1;
            onecount--;
         }else if(twocount !=0){
            temp-> data= 2;
            twocount--;
         }temp = temp-> next;
    }
    return head;
}
// sorting method by me
Node* sortlist2(Node* head){
Node* temp= head;
int count =  0;
while(temp->next !=NULL){
  count++;
  temp = temp-> next;
}
Node* temp2=head;
Node* prev= NULL;
while(count>= 0){
    if(temp2->data==0){
     prev->next=temp2->next;
     temp2->next= head;
     head= temp2;
     temp2=prev->next;
    }
    if(temp2->data== 2){
        prev->next=temp2->next;
        temp2->next=NULL;
        temp->next= temp2;
        temp=temp2;
        temp2= prev;
    }
    prev=temp2;
    temp2= temp2->next;
    count--;  
}
return head;
}
// sorting using merge 
Node* sortlist3(Node* head){
Node* onehead = new Node(-1);
Node* onetail = onehead;
Node* twohead = new Node(-1);
Node* twotail = twohead;
Node* zerohead = new Node(-1);
Node* zerotail = zerohead;
Node* curr = head;
while(curr != NULL){
  if(curr->data= 0){
     zerotail->next = curr;
     zerotail= curr;
  }else if(curr->data = 1){
    onetail-> next = curr;
    onetail = curr;
  }else{
    twotail->next = curr;
    twotail= curr;
  }curr= curr->next;
}
 if(onehead->next != NULL){
    zerotail->next = onehead->next;
 }else{
    zerotail->next= twotail->next;
 }
 onetail->next =twohead->next;
 twotail->next =NULL;
 head = zerohead->next;
 // delete dummy nodes
 delete zerohead;
 delete onehead;
 delete twohead;

 return head;
}
int main(){
Node* node1 =new Node(0);
Node* head = node1;
Node* tail = node1;
insertAtTail(tail , 2);
insertAtHead(head, 1);
insertAtTail(tail ,2);
insertAtTail(tail  , 2);
insertAtTail(tail, 2);
insertAtTail( tail ,0);
insertAtTail(tail, 1);
insertAtTail(tail , 0);
printLL(head);
//Node* temp = sortlist(head);
//printLL(temp);
//Node* temp2 = sortlist2(head);
Node* temp2= sortlist2(head);
printLL(temp2);

}