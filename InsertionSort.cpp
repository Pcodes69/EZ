#include <iostream.h>
#include <conio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void main() {
    clrscr();
    int n;
    int *arr = new int[n];
    
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements of the array:\n";
    for (int k = 0; k < n; k++) { 
        cin >> arr[k];
    }

    insertionSort(arr, n);

    cout << "Array after Insertion sort: ";
    for (int m = 0; m < n; m++) { 
        cout << arr[m] << " ";
    }
    cout << endl;

    getch(); 
}
