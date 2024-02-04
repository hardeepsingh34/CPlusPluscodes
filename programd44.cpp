 #include<iostream>
 using namespace std;

bool checkPalindrome( char array[], int n){

int s=0;
int e =n-1;
while(s<e){
    if(array[s]< '9' && array[s]>'0' && array[e]< '9' && array[e]>'0' ){
    if(array[s] != array[e]){
    return 0;
    }
    s++;
    e--;}
else if(array[s]> '9' || array[s]<'0'  && array[e]< '9' && array[e]>'0' ){
s++;
}
 else if(array[s]< '9' && array[s]>'0'  && array[e]> '9' || array[e]<'0' ){
    e--;
    
}else {
    
s++; e--;
}
}
return 1;
}
 int main(){
  char a[8]={ '5','?','3','6','@','6','?','5'};
 cout<<" final "<<checkPalindrome(a,8);
 }