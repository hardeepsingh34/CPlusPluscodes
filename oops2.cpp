#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
class studentType{
    private:
    int studentRollNo;
    string studentName;
    public:
    // declaring member function inside the class:
    void setdata( int rollno ,string name){
        studentRollNo= rollno;
        studentName= name;
    }
    // member function prototype :
    void display();
    int rollno();
};
//declaring memeber function outside the class using scope resolution operator '::' :
void studentType:: display(){
    //accessing member function from within the class:
    cout<<"\n Roll No of student : "<<rollno()<<endl;
        cout<<" Name of student  : "<<studentName<<endl;
}
inline int studentType::rollno(){
    return studentRollNo;
}
int main(){
    studentType s;
    string n = "hardeep singh";
    s.setdata(24 , n);
    s.display();
    cout<<" Roll No. "<<s.rollno();
    return 0;
}