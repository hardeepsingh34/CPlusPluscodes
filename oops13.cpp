#include<iostream>
using namespace std;
void printArr(int arr[], int m, int n){
  for(int i=0; i<m*n; i++){
        if(i%m==0)
        cout<<endl;
        cout<<arr[i]<<" ";
    }
}
int main(){
int *a, *b, *c, n, m, p, q, i, j, k, temp;
cout<<"Enter size of matrix A as m ,n : "<<endl;
cin>>m>>n;
cout<<"\nEnter size of matrix B as p, q: "<<endl;
cin>>p>>q;
if( n!= p){
    cout<<"\nMatrix product A*B is no feasible "<<endl;
    exit(1);
}
a = new int[m*n];
b= new int[p*q];
c= new int[m*q];
cout<<"\n Enter"<<m*n;
cout<<" elements of matrix A row-wise"<<endl;
for(i= 0; i<m*n; i++){
    cin>>a[i];
}
cout<<"\n Enter"<<p*q<<" elements of matrix B row-wise"<<endl;
for(i=0;i<p*q; i++){
    cin>>b[i];
}
cout<<"\nElements of A are :"<<endl;
printArr(a,m,n);
cout<<"\nElements of B are :"<<endl;
printArr(b, p,q);
for(i=0; i<m; i++){
    for(j= 0; j<q; j++){
        for(temp= 0,k=0;k<n;k++ ){
            temp+=*(a+i*n+k)*(*(b+k*q+j));
        }
            *(c+i*q+j)=temp;
        }
    }
    cout<<"\n product A*B is \n";
  printArr(c,m,q);
    delete a, b,c;
}

