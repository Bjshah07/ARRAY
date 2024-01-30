#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of the array:";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the elements of the arrays " << i + 1 << ":" << endl;
        cin >> a[i];
    }
    cout << "the elements of the arrays are:" << endl;
    for (int i = 0; i < n; i++)
    {

        cout << a[i] << " ";
    }
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[n - i-1];
    }
    cout << endl
         << "the reverse order of the arrays is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << b[i]<<"";
    }

    return 0;
}