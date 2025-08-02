#include<iostream>
using namespace std;
int pow(int a, int b){
    int ans =1;
    for(int i=0; i<b; i++){
        ans = ans*a;
    }
    return ans;
}
int decimal(int a){
    int b, count =0, ans=0;
    bool bl =1;
while(a!=0){
  b= a%10;
  a=a/10;
  if(b==1){
    ans = ans + (pow(2,count));
  }else if(b !=0){
    bl =0;
    break;
  }
  count = count +1;
}
if(bl ==1){
    return ans;
}else{
    cout<<"please enter a valid input"<<endl;
    return 0;
}
}
int main(){
    int n;
    cout<<"enter a binary number"<<endl;
    cin>>n;
    cout<<"decimal representation of "<< n<<" is : "<<decimal(n)<<endl; 
  
}