#include<iostream>
using namespace std;
int main(){
   /* int arr[10] = {33, 122,41, 67};
    cout<<"address of first memory block is "<<arr<<endl;
    cout<<"address of first memory block is "<<&arr[0]<<endl;
    cout<<"4th "<<*arr<<endl;
    cout<<"5th "<<*arr+1<<endl;
    cout<<"6th "<<*(arr +1)<<endl;
    cout<<"7th "<<*(arr)+1<<endl;
    cout<<"8th "<<arr[2]<<endl;
    cout<<"9th "<<*(arr +2)<<endl;
    int i =3; 
    cout<<i[arr]<<endl;*/
    int temp[10];
    cout<<sizeof(temp)<<endl;
    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
    cout<<"pt "<<sizeof(*temp)<<endl;
    cout<<"2nd "<<sizeof(&temp)<<endl;

}