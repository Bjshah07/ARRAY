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
    cout << "\nenter the no. to be searched:" << endl;
    int x;
    cin >> x;
    int k = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            flag = true;
            k = i;
            break;
        }
    }
    if (flag == false)
    {
        cout << x << " is not present in the array:";
    }

    else
    {
        cout << x << " is present in the array at " << k << " index" << endl;
    }
    return 0;
}
