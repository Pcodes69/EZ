#include <iostream.h>
#include <conio.h>

void linearSearch(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "\nElement found at index: " << i << endl;
            return;
        }
    }
    cout << "\nElement not found" << endl;
}

void main() {
    clrscr();
    int n, key;
    int *arr = new int[n];
    cout << "Mohammed Petiwala 046";
    cout << "\nLinear Search";

    cout << "\nEnter the number of elements in the array: ";
    cin >> n;

    cout << "\nEnter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nEnter the value to search: ";
    cin >> key;
    
    linearSearch(arr, n, key);

    getch(); 
}



