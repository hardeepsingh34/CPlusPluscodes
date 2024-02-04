#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
   node(int data){
    this->data = data;
    this->next = NULL;
   }
   ~node(){
    int value = this->data;
    //memory free
    if(this-> next != NULL){
         this->next= NULL;
            delete next;
        cout<<"A "<<endl;
    }
    cout<<" memory is free for node with data "<<value<<endl;
   }
   };
void insertAtHead(node* &head, int d){
    node * temp =new node(d);
    temp->next = head;
    head =temp;
}
void insertAtTail(node* &tail , int d){
    node* temp = new node(d);
    tail->next = temp;
    tail = tail->next; 
}
void print(node * &head){
    node* temp = head ;
    while(temp != NULL){
        cout<<temp->data<<"  ";
        temp= temp->next;
    }
    cout<<endl;
}
void deleteNode(int postion , node* &head){
    // deleting first or start node
    if(postion == 1){
        node* temp =head;
        head = head ->next;
        //memory free start node
        temp ->next =NULL;
        delete temp;
    }
     else{
        //deleting any middle node or last node
        node * curr= head;
        node* prev = NULL;
        int cnt =1;
        while(cnt<postion){
            prev = curr;
            curr = curr-> next;
            cnt ++;
        }
        prev->next= curr->next;
        //curr->next = NULL;
        delete curr;
     }
}

int main(){
node* node1= new node(10);
node* head = node1;
node* tail = node1;
print(head);

insertAtHead(head , 15);
insertAtTail(tail ,40);
print(head);

insertAtHead(head , 18);
insertAtTail(tail ,100);
print(head);

insertAtHead(head , 20);
insertAtTail(tail ,404);
insertAtTail(tail ,60);
deleteNode(4, head);

print(head);
}