#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* bottom;
    Node(int data){
        this->data= data;
        this->next= NULL;
        this->bottom = NULL;
    }
};
void insertAttail(Node* &tail , int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        tail ->next= NULL;
        tail->bottom = NULL;
    }else{
        Node* temp = new Node(data);
        tail ->next = temp;
        tail = temp;
        tail ->next = NULL;
        tail->bottom = NULL;
    }
}
void insertAtbottom(Node* tail, int data){
    
    Node* pointer = tail;
    while(pointer ->bottom != NULL){
        pointer = pointer ->bottom;
    }
    Node* temp2= new Node(data);
                pointer->bottom = temp2;
                temp2->next= NULL;
                temp2->bottom = NULL;
}
void printbottom(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->bottom;
    }
    cout<<"x"<<endl;
}
void prints(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp ->data<<"  ";
        temp = temp ->next;
    }
    cout<<endl;
}
void printLL(Node* head){
    Node* temp = head;
    cout<<endl<<endl;
    while(temp != NULL){
        printbottom(temp);
        cout<<endl<<":";
        cout<<endl<<"v"<<endl<<endl;
        temp = temp ->next;
    }
    cout<<"x"<<endl;
}
Node* nextTobottom(Node* head){
    Node* prev= NULL;
    Node* curr= head;
    Node* nextNode= head ->next;
    while(curr!=NULL){ 
        curr->next = curr->bottom;
        Node* deleteNode = curr->bottom;
        curr->bottom= NULL;
         prev = curr;
        curr= curr->next;
    } 
    return head;
}
Node* merge(Node* left , Node* right){
    left = nextTobottom(left);
    if(left == NULL){
        return right;
    }
    if(right == NULL){
        return left;
    }
    Node* ans = new Node(-1);
    Node* temp = ans;
    while(left != NULL && right != NULL){
        if(left->data< right->data){
            temp->next = left;
            temp = left;
            left= left->next;
        }else{
            temp->next = right;
            temp  = right;
            right = right->next;
        }
    }
    if(left!= NULL){
        temp->next = left;
    }
    if(right != NULL){
        temp->next = right;
    }
    ans =ans->next;
    return ans;
}

Node* flattenLL(Node* head){
    if(head == NULL){
        return head;
    }
    Node* head1 = head ;
    Node* head2= head->next;
    head1-> next = NULL;
    head2= flattenLL(head2);
    Node* ans  = merge(head1, head2); 
    return ans;
}
int main(){
Node* head = NULL;
Node* tail = NULL;
insertAttail(tail , 5);
head= tail;
insertAtbottom(tail ,7);
insertAtbottom(tail ,8);
insertAtbottom(tail, 30);
insertAttail(tail , 10);
insertAtbottom(tail, 20);

insertAttail(tail, 19);
insertAtbottom(tail, 22);
insertAtbottom(tail,50);
insertAttail(tail, 28);
insertAtbottom(tail,35);
insertAtbottom(tail, 40);
insertAtbottom(tail,45);
printLL(head);
cout<<"linked list after conversion"<<endl;
//Node* newhead = nextTobottom(head);
//printLL(head);
Node* newhead = flattenLL(head);
printLL(newhead);
prints(newhead);
}