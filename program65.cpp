#include<iostream>
using namespace std;
int binarySearch(int arr[], int size ,int key){
     int  s=0;
      int e=size-1;
      int  m;
        while (s<=e){
            m=(s+e)/2;
            if(arr[m]==key){
                return m;
            }else if(key<arr[m]){
             e= m-1;
            }else if(key>arr[m]){
                s=m+1;
            }
        }
        return -1;
    }
    int main(){
        int even[6]={2,4,5,6,7,78};
        int odd[5]={3,5,6,8,9};
        cout<<binarySearch(even,6,78)<<endl;
        cout<<binarySearch(odd, 5,3)<<endl;
               cout<<binarySearch(even,6,9)<<endl;
                     cout<<binarySearch(odd, 5,4)<<endl;
}