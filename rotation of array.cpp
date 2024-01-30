#include <iostream>
using namespace std;
void rot(int a[], int c, int b)
{
    int i, j, temp;
    for (i = c, j = b; i < j; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
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
    cout << "\nenter the no. of rotaion of an array:" << endl;
    int k;
    cin >> k;
    k = k % n;
    rot(a, 0, n - 1);
    rot(a, 0, k - 1);
    rot(a, k, n - 1);
    cout << "the rotate orde is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}