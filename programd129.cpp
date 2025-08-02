//split circular linked list in two half:
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data =d;
        this->next=NULL;
    }
    ~Node(){
        int value = this-> data;
        if(this-> next != NULL){
            this->next = NULL;
            delete next;
        }
        cout<<"memory is free for Node with data "<<value<<endl;
    }
};
void insertNode(Node* &tail , int element, int d){
   
    if(tail == NULL){
      Node* newNode = new Node(d);
      tail= newNode;
      tail->next = newNode; 
    }else{
        // non empty list 
        // assuming that the element is present in the list 
        Node* curr= tail;
        while(curr->data != element){
            curr=curr-> next;
        }
        Node* temp = new Node(d);
        temp-> next = curr-> next;
        curr-> next = temp;
    }
}
void printCLL(Node* tail){
        Node* temp = tail;
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
Node* midCLL(Node* tail){
       Node* slow = tail;
       Node* fast = tail->next;
       do{
        slow = slow->next;
        fast= fast->next;cout<<1;
        if(fast!= tail){
            fast= fast->next;
        }}while(fast!= tail);
        return slow;
}
Node* splitCLL(Node* &tail){
    
    Node* mid= midCLL(tail);
    Node* temp = mid->next;
    Node* temp2= tail;
    mid->next = tail->next;
    tail = tail ->next;
    temp2-> next = temp;
    return temp2;
}
int main(){
Node* tail=NULL;
insertNode(tail , 3 , 5);
insertNode(tail , 5, 8);
insertNode(tail, 8, 10);
insertNode(tail, 10 ,30);
insertNode(tail, 30,77);
insertNode(tail, 77, 22);

printCLL(tail->next);
cout<<tail->data<<endl;
Node* temp = splitCLL(tail);
printCLL(tail);
printCLL(temp);

}