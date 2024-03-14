#include <iostream.h>
#include <conio.h>
void main()
{
    clrscr();
    cout << "Mohammed Petiwala 046\n";
    int j, n, t;
    int *a = new int[n];
    cout << "Enter total number of elements : \n";
    cin >> size;
    cout << "Enter elements : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }
    cout << "Array after Selection sort: \n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    getch();
}