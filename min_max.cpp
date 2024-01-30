#include <iostream>
using namespace std;
int main()
{
    int a[5];
    cout << "enter the elements\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int min = a[0];
    int max = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
        else if (max < a[i])
        {
            max = a[i];
        }
    }
    cout << "the minimum no. is: " << min << endl;
    cout << "the maximum no. is: " << max;
    return 0;
}