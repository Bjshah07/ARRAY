#include <iostream>
using namespace std;
void palindrome(int a[], int n)
{
    int k = 0, i;
    for (i = 0; i <= n / 2 && n != 0; i++)
    {
        if (a[i] != a[n - i - 1])
        {
            k++;
            break;
        }
    }
    if (k != 0)
    {
        cout << "the array is  not palindrome";
    }
    else
    {
        cout << "the array is  palindrome";
    }
    return;
}
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
    cout << endl;
    palindrome(a, n);
    return 0;
}