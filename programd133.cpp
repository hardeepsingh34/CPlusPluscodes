// program to check palindrome in Linked list :
#include<iostream>
using namespace std;
//basic node class
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
       this-> data= data;
       this-> next = NULL;
    }
};
//function to insert element at tail
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
// function to display linked list : 
void printLL(Node* &head){
    cout<<endl;
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}
//function to obtain mid of a function :
Node* getmid(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL && fast -> next != NULL){
        fast = fast->next->next;
        slow = slow-> next;
    }
    return slow;
}
//fuction to reverse a linked list :
Node* reverse(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* nextnode = NULL;
    while(curr != NULL){
        nextnode = curr->next;
        curr->next= prev;
        prev= curr;
        curr= nextnode;
    }
    return prev;
}
//fuction to check wheather the given linked list is palindrome or not :
bool ispalindrome(Node* head){
    Node* mid = getmid(head);
    cout<<mid->data<<endl;
    if(head== NULL){
        return 1;
    }
    Node* temp = reverse(mid->next);
    printLL(temp);
    cout<<"hi"<<endl;
    printLL(head);
    cout<<"hello "<<endl;
     Node* head2= temp;
     while(head != temp && head2 != NULL){
        if(head-> data != head2 -> data){
            return 0;
        } 
        head= head->next;
        head2= head2->next;   
     }
     
     return 1;
}
// our main function :)
int main(){
    Node* head;
   Node* tail;
    insertAttail(tail , 1); 
    head = tail; 
    insertAttail(tail , 3);
    insertAttail(tail , 4);
    insertAttail(tail , 7);
    insertAttail(tail , 4);
    insertAttail(tail ,3);
    insertAttail(tail , 1);
    //insertAttail(tail, );
    cout<<endl<<endl<<" Linked list is "<<endl;
    printLL(head);
  
    if(ispalindrome(head)==0){
        cout<<"Given Linked list is not palindrome "<<endl<<endl;
    }else{
        cout<<"Given Linked list is palindrome "<<endl;
    }
    return 0;
}