#include<iostream>
using namespace std;
// Floyd's cycle activation cycle
class node{
    public:
    int data;
    node* next;
    node(int d){
        this-> data = d;
        this->next = NULL;
    }
    ~node(){
        int value = this->data;
        if(this->next != NULL){
          this->next = NULL;
          delete next;
        }
        cout<<" memory is free for "<<value<<endl;
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
void insertNode(node* &tail , int element, int d){
    if(tail == NULL){
      node* newNode = new node(d);
      tail= newNode;
      tail->next = newNode;
    }else {
        // non empty list 
        // assuming that the element is present in the list 
        node* curr= tail;
        while(curr->data != element){
            curr=curr-> next;
        }
      
        node* temp = new node(d);
        temp-> next = curr-> next;
        curr-> next = temp;
    }
}
void printCLL(node* tail){
        node* temp = tail;
        cout<<endl;
        if(tail == NULL){
            cout<<"given list is Empty "<<endl;
            return;
        }
        do{
            cout<< temp->data<<"  ";
            temp = temp-> next;
        }while(temp!= tail);
        cout<<endl<<endl;
}
void deleteNode(node* &tail ,int value){
    if(tail == NULL){
        cout<<"List is Emptly "<<endl;
        return;
    }
  node* curr= tail->next;
  node* prev = tail;
  while(curr->data != value){
    prev = curr;
    curr = curr->next;
  }
 prev->next= curr->next;

   if(prev == curr){
    tail = NULL;
   }else if(tail == curr){
   tail = prev;
  }
     curr->next= NULL;
   delete curr;
}
node* floydDetectLoop(node* head){
    if(head == NULL)
    return NULL;
    node* slow = head;
    node* fast = head;
    while(slow != NULL && fast !=NULL){
      fast= fast->next;
      if(fast !=NULL){
        fast=fast->next;
      }
      slow = slow ->next;
      if(slow == fast){
        return slow;
      }
    }
    return NULL;
}
node* gettingStarted(node * head){
  if(head==NULL)
  return NULL;
  node* intersection =floydDetectLoop(head);
  if(intersection== NULL){
      return NULL;
  }
  node* slow = head;
  while(slow != intersection){
    slow =slow->next;
    intersection = intersection->next;
  }
  return slow;
}
node *removeLoop(node *head)
{
if(head ==NULL){
    return NULL;
}
node* startofLoop = gettingStarted(head);
node * temp= startofLoop;
if(temp == NULL){
  return head;
}
while(temp-> next != startofLoop){
    temp= temp->next;
}
temp->next = NULL;
return head;
}
int main(){
   
    node* node1 = new node(34);
    node* head= node1;
    node* tail =NULL;
    insertAtHead(head , 16);
    //insertAtHead(head,45);
     insertAtHead(head , 20);
     printLL(head);
    insertNode(tail , 3 , 5);
    insertNode(tail , 5, 8);
    insertNode(tail, 8, 10);
    insertNode(tail, 10 ,30);
    insertNode(tail,30 , 89);
    insertNode(tail, 30,77);
   // 40 0
//893 166 16 729 551 296 361 478 304 301 920 676 675 828 324 888 959 409 548 785 377 317 824 121 596 677 779 863 929 433 206 555 906 705 184 749 47 417 415 683 

    head->next->next->next=tail;
    cout<<head->next->next->next->data<<endl;
    floydDetectLoop(head);
    printCLL(tail);
    cout<<"loop is started from "<<gettingStarted(head)->data<<endl;
}