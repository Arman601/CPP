#include <iostream>
using namespace std;
string name()
{
    string name;
    cout << " Enter the studnet name" << endl;
    cin >> name;
    cout << " the student name :- " << name << endl;
};

int Roll()
{
    int Roll;
    cout << " Enter the studnet Roll" << endl;
    cin >> Roll;
    cout << " the student Roll :- " << Roll << endl;
};

int age()
{
    int age;
    cout << " Enter the studnet age" << endl;
    cin >> age;
    cout << " the student age  :- " << age << endl;
};

string Address()
{
    string address;
    cout << " Enter the studnet address" << endl;
    cin >> address;
    cout << " the student address :- " << address << endl;
};

int main()
{
    int n;
    // menu
    cout << " Enter 1 for student name " << endl;
    cout << " Enter 2 for student Roll " << endl;
    cout << " Enter 3 for student age " << endl;
    cout << " Enter 4 for student address " << endl;
    cin >> n;
    if (n == 1)
        name();

    else if (n == 2)

        // else  if ( n ==3)
        Roll();
    else if (n == 3)

        age();
    else if (n == 4)
        Address();
    else
    {
        cout << " Invalid number " << endl;
    }
    return 0;
}
