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
    cout<<"\nthe unique elemnets in array are:";
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            cout << endl<<a[i];
            
        }
    }

    return 0;
}