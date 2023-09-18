#include<iostream>
#include<string>
using namespace std;
struct student{
    string name;
    int rollno;
    float marks;
    string address;
};
student  student1;
int main()
{
    
    
    student1.name = "Arman";
    student1.rollno = 20;
    student1.marks = 336;
    student1.address = "Nawada";
cout<<"Student Details: "<<endl;
cout<<"-------------------"<<endl;
    cout<<" Student Name is: "<<student1.name<<endl;
    cout<<"Student Roll: "<<student1.rollno<<endl;
   
    cout<<" Intermediate Marks: "<<student1.marks<<endl;
     cout<<"Student Address: "<<student1.address<<endl;
    return 0;

}

