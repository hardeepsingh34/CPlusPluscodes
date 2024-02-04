#include<iostream>
#include<algorithm>
using namespace std;
bool reverseString(string& name ,int i ,int j ){
    cout<<"i "<<i<<" j "<<j<<endl;
     if(j<=i){
     return 1;
     }
     if(name[i]!=name[j]){
        return 0;
     }else {
        i++;
     j--;
     return reverseString(name , i,j);
     }
}
int main(){
    string name = "hardeep";
   cout<< reverseString(name, 0 , name.size()-1);
   
}