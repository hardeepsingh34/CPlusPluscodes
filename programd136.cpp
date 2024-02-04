#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
       this->data = data;
       this-> next = NULL;
    }
};
void insertAttail(Node* &tail , int data){
    if(tail == NULL){
        Node *temp = new Node(data);
        temp -> next = NULL;
        tail = temp;
    }
    Node* temp =  new Node(data);
    tail-> next = temp;
    tail = temp; 
    tail -> next = NULL;
}
void printLL(Node *head){
   Node* temp = head;
   cout<<endl;
   while( temp!= NULL){
    cout<<temp->data<<"  ";
    temp = temp-> next;
   }
   cout<<endl<<endl;
}
Node* middle(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast !=NULL && fast->next !=NULL){
     slow = slow -> next;
     fast= fast -> next-> next;
    }
    return slow;
}
Node* merge(Node* left, Node* right){
    if(left == NULL){
        return right;
    }
    if(right ==NULL){
        return left;
    }
    Node* ans = new Node(-1);
    Node* temp = ans;

    while( left!= NULL && right!= NULL){
        if(left->data < right->data ){
            temp->next= left;
            temp= left;
            left= left->next; 
        }else{
         
            temp -> next = right;
           temp = right;
           right = right->next;
        }  
    }
    if(right!= NULL){
        temp->next = right; 
    }
    if(left!= NULL){
        temp->next = left;
    }
    ans= ans->next;
    return ans;
}
Node * mergesort(Node * head){
    // base case
    if(head ==NULL || head->next == NULL){
        return head;
    }
    // breaking linked list in two halfs :
    Node* mid= middle(head);
    Node* left = head;
    Node* right = mid-> next;
    mid->next =  NULL;
    //recursive call to sort by both halfs:
    left = mergesort(left);
    right = mergesort(right);
    //merge the both left and right half:
    Node * ans = merge(left, right);
    return ans;
}
int main(){
Node* head =NULL;
Node* tail = NULL;
insertAttail(tail , 3);
head = tail;
insertAttail(tail,45);
insertAttail(tail , 7);
insertAttail(tail,5);
insertAttail(tail , 23);
insertAttail(tail,34);
insertAttail(tail , 89);
insertAttail(tail,12);
insertAttail(tail , 1);
insertAttail(tail,50);
cout<<endl<<"Linked list before applying merge sort "<<endl;
printLL(head);
Node* newhead =  mergesort(head);
cout<<"Linked list after sorting :"<<endl;
printLL(newhead);
} 