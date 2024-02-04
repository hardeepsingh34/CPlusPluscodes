#include<iostream>
#include<map>
using namespace std;
// circular  linked list 
class node{
    public:
    int data;
    node* next;
    // constructor
    node(int d){
      this->data = d;
      this->next = NULL;  
    }
    ~node(){
        cout<<endl;
        int value= this -> data;
        if(this->next != NULL){
            this->next =NULL;
            delete next;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};
void insertNode(node* &tail , int element, int d){
   
    if(tail == NULL){
      node* newNode = new node(d);
      tail= newNode;
      tail->next = newNode;
    }else{
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
bool isCircular(node* tail){
    if(tail == NULL){
        return true;
    }
    node*temp = tail -> next;
    while(temp !=NULL && temp != tail){
      temp = temp ->next;
    }
    if(temp == tail){
        return true;
    }
    return false;
}
bool detectLoop(node* tail){
    if(tail ==NULL){
        return false;
    }
    map<node*, bool> visited;
    node* temp =tail;
    while(temp != NULL){
        if(visited[temp]==true){
            return true;
        }
        visited[temp]=true;
        temp= temp->next;
    }
    return false;
}
int main(){
node* tail=NULL;

insertNode(tail , 3 , 5);
insertNode(tail , 5, 8);
insertNode(tail, 8, 10);
insertNode(tail, 10 ,30);
insertNode(tail, 30,77);
deleteNode(tail , 8);
cout<<tail->data<<endl;
printCLL(tail);
cout<<tail->data<<endl;
cout<<detectLoop(tail);
if(isCircular(tail)){
    cout<<"yes, given linked list is circular"<<endl;
}else{
    cout<<"No, given linked list is not circular"<<endl;
}

printCLL(tail);
}