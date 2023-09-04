#include <iostream>
#include <string>

using namespace std;

struct Worker {
    string name;
    string address;
    int age;
    string jobTitle;
    double salary;
};

int main() {
    Worker worker;

    cout << "Enter worker details:" << endl;
    
    cout << "Name: ";
    getline(cin, worker.name);
cout<<"Enter worker Address";
getline(cin,worker.address); 

    cout << "Age: ";
    cin >> worker.age;

    cin.ignore(); // Clear the newline character from the input buffer

    cout << "Job Title: ";
    getline(cin, worker.jobTitle);

    cout << "Salary: ";
    cin >> worker.salary;

    cout << "\nWorker Details:" << endl;
    cout << "Name: " << worker.name << endl;
    cout<<  "Address: "<<worker.address<<endl;
    cout << "Age: " << worker.age << endl;
    cout << "Job Title: " << worker.jobTitle << endl;
    cout << "Salary: " << worker.salary << endl;

    return 0;
}
