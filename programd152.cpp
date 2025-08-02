#include<iostream>
using namespace std;
class Nstack{
int *arr;
int *top;
int *next;
int n,s;
int freespot;
public:
//Initialize your data structure
// N is number of stack that are implimented on array of size S;
// so S is a size of array 
void print(int arr[] ,int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
Nstack(int N, int S){
    n= N;
    s=S;
    arr = new int[s];
    top = new int[n];
    next = new int[s];
    //top initialize
    for(int i = 0; i<n; i++){
        top[i]= -1;
    }
    //next initialize
    for(int i =0; i<s; i++){
     next[i] =i+1;
    }
    // update last index value to -1
    next[s-1] =-1;
    // initialize frespot
    freespot =0;    
}

// x is value which is going to store in array
// m  is stack no. 
bool push(int x, int m){
        //check for overflow
        if(freespot == -1){
            cout<<"overflow"<<endl;
            return false;
        }
        // find index 
        int index= freespot;

        //update freespot
        freespot = next[index];
        
        //insert element into array
         arr[index] = x;
         
         // update next
         next[index] = top[m-1];

         // update top
         top[m-1] = index;
         print(arr, index+1);
         return true;
    }
    int pop(int m){
        // check underflow condition
        if(top[m-1] == -1){
            cout<<"underflow"<<endl;
            return -1;
        }
        int index = top[m-1];
        top[m-1] = next[index];
        next[index]= freespot;
        freespot= index;
        print(arr, index);
        return arr[index];
    }
};
int main(){
   Nstack S(3, 6);
   S.push(10, 1);
   S.push(2, 1);
   S.push(3,1);
   S.push(5,2);
   S.push(3,2);
   S.push(2,2);
   S.pop(2);
   S.pop(2);
   S.pop(1);
   S.pop(2);
}