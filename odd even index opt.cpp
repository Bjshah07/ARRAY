// PGM TO DO OPERATIONS AT THE ODD AND EVEN PLACES OF THE ARRAYS WITH DIFF. OPERATORS
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of the array: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the element of " << i + 1 << endl;
        cin >> a[i];
    }
    cout << "the entered elements of the array are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            a[i] = a[i] * 2;
        }
        else
        {
            a[i] = a[i] + 10;
        }
    }
    cout << endl
         << "after the operation at the index: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}