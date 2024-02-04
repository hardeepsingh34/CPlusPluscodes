// program passing object as a argument of function
#include<iostream>
using namespace std;
 class complexnumber{
    private:
    float realpart;
    float imaginarypart;
    public:
    void setComplexnumber(float real, float imaginary){
        realpart = real;
        imaginarypart = imaginary;
    }
    //member function to output complex number
    void displayComplexnumber(){
        cout<<realpart<<" + "<<imaginarypart<<"i"<<endl;
    }
    // passing object as argument in function
    void addComplexnumber(complexnumber n1 , complexnumber n2){
         realpart = n1.realpart + n2.realpart;
         imaginarypart= n2.imaginarypart+ n1.imaginarypart;
    }
 };
int main(){         //main program
complexnumber n1 ,n2, n3;     //create object
n1.setComplexnumber(1.3 , 3.4);
n1.displayComplexnumber();
n2.setComplexnumber(34.4, 3.5);
n2.displayComplexnumber();
n3.addComplexnumber(n1, n2);   
n3.displayComplexnumber();     //display object

}