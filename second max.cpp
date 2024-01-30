#include <iostream>
#include <climits>
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
    int Smax = INT_MIN;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max<a[i])
        {
            Smax=max;
            max=a[i];
        }
        else if (Smax<a[i] && max!=a[i])
        {
            Smax=a[i];
        }
        
    }
    cout<<endl<<"the second greatest no. of an array is: "<<Smax;

    return 0;
}