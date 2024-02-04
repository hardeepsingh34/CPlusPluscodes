#include<iostream>
#include<algorithm>
using namespace std;
void reverseString(string& name ,int i ,int j ){
    cout<<"i "<<i<<" j "<<j<<endl;
     if(j<=i){
     return;
     }
     swap(name[i],name[j]);
     i++;
     j--;
     reverseString(name , i,j);
}
int main(){
    string name = "bhatti";
    reverseString(name, 0 , name.size()-1);
    cout<<name;
}