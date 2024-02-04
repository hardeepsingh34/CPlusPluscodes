#include<iostream>
#include<map>
using namespace std;
    //Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
void insertAtTail(Node* &tail, int d){
    if(tail== NULL){
        Node*temp= new Node(d);
        temp->next = NULL;
        tail = temp;
    }
    Node* temp= new Node(d);
    tail->next = temp;
    temp->next = NULL;
    tail = temp;
   
}
void printLL(Node* &head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp-> next;
    }
}
Node *removeDuplicates(Node * &head)
{
    map<int, bool> visited;
     Node* temp= head;
    while(temp!=NULL){
        visited[temp->data]=0;
        temp=temp->next;
    }  
    temp=head;
    Node* prevNode= NULL;
    Node* nextNode= NULL;
    while(temp != NULL) {
        if(visited[temp->data]==0){
            visited[temp->data]=1;
            prevNode= temp;
        temp = temp->next;
        }else{
            nextNode= temp->next;
            prevNode->next= temp->next;
            delete temp;
            temp = nextNode;
        }
    }    
  return head;  
}
int main(){
Node* Head=NULL;
Node* tail= NULL;
insertAtTail(tail, 4);
Head = tail;
insertAtTail(tail , 5);
insertAtTail(tail, 4);
insertAtTail(tail, 3);
insertAtTail(tail, 4);
insertAtTail(tail, 5);
insertAtTail(tail, 5);
insertAtTail(tail, 4);
insertAtTail(tail, 3);
insertAtTail(tail , 9);
insertAtTail(tail, 34);
insertAtTail(tail, 34);
insertAtTail(tail, 34);
insertAtTail(tail, 34);
insertAtTail(tail, 65);
insertAtTail(tail, 34);
cout<<endl<<"Linked list before "<<endl;
printLL(Head);
removeDuplicates(Head);
cout<<endl<<endl<<"Linked list after removing duplicates "<<endl;
printLL(Head);
cout<<endl<<endl;
return 0;
}