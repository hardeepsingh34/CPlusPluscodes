// returning object from Function
#include<iostream>
using namespace std;
class complexnumber{
    private:
    float realpart;
    float imaginarypart;
    public:
    void setComplexnumber(float real, float imaginary){
        realpart= real;
        imaginarypart= imaginary;
    }
    void displayComplexnumber(){
        cout<<realpart<<" + "<<imaginarypart<<"i"<<endl;
    }
    // fucntion returning object
    complexnumber addcomplexnumber(complexnumber n1){
        complexnumber temp;
        temp.realpart = realpart+ n1.realpart;
        temp.imaginarypart= imaginarypart + n1.imaginarypart;
        return temp;
    }
};
int main(){
complexnumber n1 ,n2, n3;     //create object
n1.setComplexnumber(1.3 , 3.4);
n1.displayComplexnumber();
n2.setComplexnumber(34.4, 3.5);
n2.displayComplexnumber();
n3= n1.addcomplexnumber(n2);   
n3.displayComplexnumber();     //display object

}