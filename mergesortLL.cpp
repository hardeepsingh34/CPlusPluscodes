#include<iostream>
using namespace std;
// singly linked list 
//merge sort linked list
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
Node* findMiddle2(Node* head,Node * e){
    if(head == e || head == NULL){
        return head;
    }
    Node* fast= head->next;
    Node* slow =head;
    while(fast !=e){
        if(fast->next == e){
            return slow->next;
        }
        fast= fast -> next -> next;

        slow = slow ->next;
    }
    return slow;
}
Node* merge( Node* &s, Node* &e ){
   Node* mid = findMiddle2(s,e);
   cout<<mid->data<<endl;
   Node* temp=s;
   Node* node1 = new Node(2);
   Node* node2 = new Node(1);
   Node* ans = new Node(2);
    Node* Node1= node1;
   Node* Node2= node2;
   while(temp!=mid->next){
    insertAtTail(node1,temp->data);
    temp = temp->next;
   }
   cout<<endl;
   printLL(node1);
   cout<<endl;
   temp = mid->next;
   while(temp != e->next){
    insertAtTail(node2, temp->data);
    temp = temp->next;
   }
    cout<<endl;
   printLL(node2);
   cout<<endl;
   Node* answer = ans;
   Node1=Node1->next;
   Node2=Node2->next;
   cout<<Node2->data;
   while(Node1 != mid->next || Node2 != e->next){
    if(Node1->data < Node2->data){
       insertAtTail(ans, Node1->data);
       Node1=Node1->next;
    }else{
        insertAtTail(ans,Node2->data);
        Node2=Node2->next;
    }
   }
   cout<<2;
    cout<<endl;
   printLL(ans);
   cout<<endl;
   while(Node1!= mid){
        insertAtTail(ans, Node1->data);
       Node1=Node1->next;   
   }
   while(Node2 != e){
        insertAtTail(ans,Node2->data);
         Node2=Node2->next;
   }
   cout<<endl<<"i am in merge "<<endl<<endl;
   printLL(answer);
   cout<<endl;
   return answer->next;
}
Node* mergeSort( Node* &s, Node* &e){
if(s->next ==e || e== s){
    cout<<s->data; 
    printLL(s);
    return s;

}
Node* mid =findMiddle2(s,e);
cout<<0;
mergeSort(s,mid);
mergeSort(mid->next ,e);
cout<<1<<endl;
cout<<s->data<<" "<<e->data<<endl;
return merge(s,e);
}
int main(){
Node* node1 = new Node(10);
Node *head = node1 ;
Node *tail = node1 ;
insertAtTail(tail , 68);
insertAtTail(tail, 385);
insertAtTail(tail, 934);
insertAtTail(tail, 34);
insertAtTail(tail,58);
insertAtTail(tail, 3844);
insertAtHead(head, 439);
cout<<"before sorting "<<endl;
printLL(head);
cout<<"after merge sort "<<endl;
Node* temp  =mergeSort(head, tail);
printLL(temp);

cout<<endl<<findMiddle2(head , head->next  )->data<<endl;
}