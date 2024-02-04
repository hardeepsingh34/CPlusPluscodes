#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next =NULL;
    }
};
void insertAttail(Node* &tail, int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        tail ->next = NULL;
    }else{
        Node* temp = new Node(data);
        tail->next = temp;
        tail = temp;
        tail ->next = NULL;
    }
}
void PrintLL(Node *head){
    cout<<endl;
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl<<endl<<endl;
}
Node* findmid(Node* head){
    Node* slow=head;
    Node* fast=head->next;
    while(fast != NULL && fast->next != NULL){
        slow= slow->next;
        fast= fast->next->next;
    }
    return slow;
}
Node* merge(Node* left, Node* right){
     if(left == NULL){
        return right;
     }
     if(right == NULL){
        return left;
     }
     Node* ans = new Node(-1);
     Node* temp= ans;
     while(left != NULL && right != NULL){
        if(right->data < left->data){
            temp ->next = right;
            temp = temp->next;
            right = right ->next;
        }else{
            temp ->next = left;
            temp = temp ->next;
            left = left->next;
        }
     }
     if(left !=NULL){
        temp ->next = left;
     }
     if(right != NULL){
        temp ->next = right;
     }
     return ans->next;
}
Node* mergesort(Node* head){
    // base case
    if(head->next == NULL){
        return head;
    }
    // breaking down in two halfs:
     Node* mid = findmid(head);
     Node* left= head;
     Node* right = mid->next;
     mid->next =NULL;
     // recursive calling to two halves:
     left = mergesort(left);
     right = mergesort(right);
     // merge back two halves : 
    Node* ans = merge(left , right);
    return ans;
}
Node* removeduplicates(Node* &head){
    Node* temp=head;
    Node* ans = head;
    while( temp != NULL){ 
        if(temp->next != NULL && temp->data == temp ->next->data ){
            Node* DeleteNode = temp->next;
            Node* next_next = temp ->next->next;
            delete (DeleteNode);
            temp->next = next_next;
            }else{
                temp = temp->next;
            }
        }
        return head;
    }
int main(){
    Node* head= NULL;
    Node* tail = NULL;
    insertAttail(tail , 1);
    head = tail;
    insertAttail(tail, 3);
    insertAttail(tail, 5);
    insertAttail(tail, 3);
    insertAttail(tail, 5);
    insertAttail(tail, -3);
    insertAttail(tail, 55);
    insertAttail(tail, 34);
    insertAttail(tail, 5);
    cout<<"given Linked list "<<endl;
    PrintLL(head);
    Node* newhead = mergesort(head);
    cout<<"Sorted list :"<<endl;
    PrintLL(newhead);
    Node* newhead1 = removeduplicates(newhead);
    cout<<"Final after removal of duplicates "<<endl;
    PrintLL(newhead1);
}