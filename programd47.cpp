#include<iostream>
using namespace std;
string replacespace(string &a){
   string temp;
   int n= a.length();
   for(int i=0; i<n; i++){
    if(a[i]==' '){
        temp.push_back('@');
        temp.push_back('4');
        temp.push_back('0');
    }else{
        temp.push_back(a[i]);
    }
    }
    return temp;
}
int main(){
    string a ;
   
    cout<<"enter a string with spaces"<<endl;
    getline(cin,a);
     a[20]='a';
    cout<<replacespace(a);
}