#include<iostream>
using namespace std;
// singly linked list 
class node{
    public:
    int data;
    node* next;
        // constructor
        node(int data){ 
        this->data= data;  
        this->next= NULL;
    }
    ~node(){
        int value =this->data;
        if(this->next != NULL){
            this->next = NULL;
            delete next;
        }
        cout<<"memory is free for data "<< value<<endl;
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
void deletenode(int position, node* &head){
if(position == 1){
    node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
}else{
    node* curr = head;
    node* prev = NULL;
    int cnt =1;
    while(cnt<position){
        prev= curr;
        curr= curr->next;
        cnt++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}
}
// middle of linked list
//# approach 1->
int getlength( node* head){
    int len = 0;
    while(head != NULL){
        len++;
        head = head ->next;
    }
    return len;
}
node* findMiddle(node* head){
    int len = getlength(head);
    int ans = (len/2);
    cout<<ans<<endl;
    int cnt =0;
    node* temp = head;
    while(cnt<ans){
      temp = temp  -> next;
      cnt++;
    }
    return temp ;
}
// # approach 2->
node* findMiddle2(node* head){
    if(head == NULL || head-> next == NULL){
        return head;
    }
    node* fast= head->next;
    node* slow =head;
    while(fast !=NULL){
        if(fast->next == NULL){
            return slow->next;
        }
        fast= fast -> next -> next;

        slow = slow ->next;
    }
    return slow;
}

// reverse linked list (k-groups)
node * kReverse(node* head , int k){
    // base case 
    if(head == NULL){
        return NULL;
    }
    node* prev = NULL;
    node* curr= head;
    node* next = NULL;
    int count = 0;
    while(curr!= NULL && count<k){
        next = curr-> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count ++;
    }
    // recursion
    if(next != NULL){
        head -> next = kReverse(next , k);
    }
    return prev;
}
int main(){
node* node1= new node(10);
node* head = node1;
node* tail = node1;
insertAtHead(head , 16);
insertAtHead(head , 20);
insertAtHead(head, 40);
insertAtTail(tail, 80);
printLL(head);
head =kReverse(head, 3);
printLL(head);
cout<< " length of given lindked list is "<<getlength(head)<<endl;
cout<<findMiddle(head)->data<< endl;
cout<< "middle of linked list is "<<findMiddle2(head)->data<<endl;
}