#include <iostream>
using namespace std;
void sum()
{
    int n1, n2;
    cout << " Enter the first number" << endl;
    cin >> n1;
    cout << " Enter the second number" << endl;
    cin >> n2;
    cout << " the sum = " << n1 + n2 << endl;
}
void subtract()
{
    int n1, n2;
    cout << " Enter the first number" << endl;
    cin >> n1;
    cout << " Enter the second number" << endl;
    cin >> n2;
    cout << " the sum = " << n1 - n2 << endl;
}

void mult()

{
    int n1, n2;
    cout << " Enter the first number" << endl;
    cin >> n1;
    cout << " Enter the second number" << endl;
    cin >> n2;
    cout << " mult = " << n1 * n2 << endl;
}

void div()
{
    int n1, n2;
    cout << " Enter the first number" << endl;
    cin >> n1;
    cout << " Enter the second number" << endl;
    cin >> n2;
    cout << " the sum = " << n1 / n2 << endl;
}

int main()
{

    int n;
    // cin >> n;

    cout << " press 1 for addition " << endl;
    cout << " press 2 for subtraction " << endl;
    cout << " press 3 for multiplication " << endl;
    cout << " press 4 for division " << endl;
    cin >> n;
    if (n == 1)
        sum();
    else if (n == 2)
        subtract();

    else if (n == 3)
        mult();

    else if (n == 4)

        div();
    else
    {
        cout << " Invalid number " << endl;
    }

    return 0;
}
