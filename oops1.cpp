#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
class studentType{
    private:
    int studentRollNo;
    string studentName;
    public:
    void setdata( int rollno ,string name){
        studentRollNo= rollno;
        studentName= name;
    }
    void display(){
        cout<<"\n Roll No of student : "<<studentRollNo<<endl;
        cout<<" Name of student  : "<<studentName<<endl;
    }
};
int main(){
    studentType s;
    string n = "hardeep singh";
    s.setdata(24 , n);
    s.display();
}