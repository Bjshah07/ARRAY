// PGM TO FIND THE SUM OF ODD AND EVEN INDEX OF AN ARRAY
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
    int sumO = 0;
    int sumE = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sumO = sumO + a[i];
        }
        else
        {
            sumE = sumE + a[i];
        }
    }

    cout << endl
         << "the sum of the even indexes of an array is: " << sumE << endl;
    cout << "the sum of the odd indexes of an arrays of is:" << sumO;

    return 0;
}