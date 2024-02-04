#include<iostream>
using namespace std;
class ComplexNumber{
    private:
    float realpart;
    float imaginarypart;
    public:
    void setComplexNumber(float real, float imaginary){
      realpart =real;
      imaginarypart = imaginary;  
    }
    //member function to output complex number :
    void displayComplexNumber(){
        cout<<realpart<<" + "<<imaginarypart<<"i"<<endl;
    }
    // passing object as argument of function : 
    void addComplexNumber(ComplexNumber n1, ComplexNumber n2){
        realpart = n1.realpart+n2.realpart;
        imaginarypart = n1.imaginarypart+ n2.imaginarypart;
    }
    // returning objects from functions :
    ComplexNumber AddComplexNumber(ComplexNumber n1){
        ComplexNumber temp;
         temp.realpart = n1.realpart+realpart;
         temp.imaginarypart = n1.imaginarypart+ imaginarypart;
         return temp;
    }
};
int main(){
ComplexNumber n1, n2, n3, n4;
n1.setComplexNumber( 1.3 , 5.4);
n1.displayComplexNumber();
n2.setComplexNumber(2.5, 5.2);
n2.displayComplexNumber();
n3.addComplexNumber(n1, n2);
n3.displayComplexNumber();
n4=n3.AddComplexNumber(n2);
n4.displayComplexNumber();
cout<<"hello world"<<endl;
}