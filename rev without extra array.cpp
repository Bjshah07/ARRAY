#include <iostream>
using namespace std;
void rev(int a[],int n) //ARRAY ACTS AS POINTER IN FUNCTION EVEN ON CALL BY VALUE
{
    int i, j, temp;
    for (i = 0, j = n; i < j; i++, j--)
    {
        temp = a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    return ;
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
    rev(a,n-1);
    cout<<"\nthe reverse order is:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}