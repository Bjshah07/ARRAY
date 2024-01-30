// PGM TO FIND SUM OF 2 ARRAYS ELEMENT EQUAL GIVEN VALUE OF X, ITS PAIRS AND NO. OF PAIRS
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
    int x;
    cout << "\nenter the value of x whose sum of pair is to be search: " << endl;
    cin >> x;
    int count = 0;
    cout<<"the pairs are: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((a[i] + a[j]) == x)
            {
                count++;
                cout << "("<<a[i] << "," << a[j]<<")" << endl;
            }
        }
    }
    cout<<"the no. of pairs are: "<<endl;
    cout << count;

    return 0;
}