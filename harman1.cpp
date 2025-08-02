#include<iostream>
using namespace std;

int add(int x,int y){
    return x +y;
    
}

int main(){
    
    
    int age;
    // cout<<"enter your age"<<endl;
    // cin>>age;
    // if(age < 18){
    //     cout<<"children "<<endl;
    // }else{
    //     cout<<"you can vote"<<endl;
    // }
    cout<<"counting 1 to 100"<<endl;

    string fruit[] = {"apple", "mango", "banana", "stawberry"};
    
    for(int i=0; i<=3; i++ ){
       cout<<fruit[i]<<endl;
    }
  int x = 2;
  int y =8;
  int c= add(x, y);
  cout<<c;
    
}