
#include <iostream>
using namespace std;
int main()
{

    int A[4][3]; // two dimension Array Declaration
    cout << "Enter the age ,  mark  and Roll for 0 student " << endl
         << endl;

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 3; i++)
        {
           
            cin >> A[j][i];
        }

        cout << "Enter the Age , mark and Roll " << j + 1 << "student" << endl;
    }

       // end

    cout << "Age \t Mark \t Roll" << endl
         << endl;

    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cout << A[j][i] << " \t";
        }
        cout << endl;
    }

    return 0;
}