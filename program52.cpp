#include<iostream>
using namespace std;
void update(int arr[],int size){
    arr[0]=120;
}
void printArr( int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
}
int main(){
      int dost[3]={1,3,2};
      cout<<"array before"<<endl;
      printArr(dost ,3);
      update(dost ,3);
      cout<<endl<<"array after"<<endl;
      printArr(dost ,3);

}