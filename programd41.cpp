#include<iostream>
using namespace std;
int getlength(char length[]){
    int count =0;
    for(int i=0 ; length[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
     char name[20];
     cout<<"enter the name "<<endl;
     cin.getline(name,20);
     cout<<"your name is ";
     cout<< name<<endl;
     cout<<"length -> "<<getlength(name)<<endl;
     
}