#include<iostream>
using namespace std;
// check palindrome 
int length(char array[]){
    int count =0;
    for(int i=0; array[i] !='\0'; i++){
        count ++;
    }
    return count;
}
bool checkPalindrome( char array[]){
int n= length(array);
int s=0;
int e =n-1;

while(s<e){
    if(array[s] != array[e]){
    return 0;
    }
    s++;
    e--;
}
return 1;
}
int main(){
char a[20];
cout<<"enter any letter "<<endl;
cin.getline(a ,20);
cout<<checkPalindrome(a)<<endl;
if(checkPalindrome(a)){
    cout<<"given letter is palindrome "<<endl;
}else{
    cout<<"given letter is not palindrome "<<endl;
}

}