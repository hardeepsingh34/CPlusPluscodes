#include<iostream>
using namespace std;
int getlength(char length[]){
    int count =0;
    for(int i=0 ; length[i] != '\0'; i++){
        count++;
    }
    return count;
}
void reverse( char a[]){
    int n = getlength(a);
    int s=0;
    int e=n-1;
    char b;
    while(s<e){
      b= a[s];
      a[s]= a[e];
      a[e]= b;
      s++;
      e--;
    }
}
int main(){
    char name[20];
    cout<<" enter the name "<<endl;
    cin.getline(name,20);
    cout<<" your name is "<< name <<endl;
    reverse(name);
    cout<<" after reverse "<<name<<endl;

}