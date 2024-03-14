#include <iostream.h>
#include <conio.h>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
    int i;

    
    for (i = 0; i < size1; i++){
        mergedArr[i] = arr1[i];
    }

    
    for (int j = 0; j < size2; j++){
        mergedArr[size1 + j] = arr2[j];
    }
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void main() {
    clrscr();
    cout << "Mohammed Petiwala 046";
    int size1, size2, i;
    cout << "\nEnter size of first array: ";
    cin >> size1;

    int *arr1 = new int[size1];
    cout << "Enter elements of first array: ";
    for (i = 0; i < size1; i++){
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> size2;

    int *arr2 = new int[size2];
    cout << "Enter elements of second array: ";
    for (i = 0; i < size2; i++){
        cin >> arr2[i];
    }

    int mergedSize = size1 + size2;
    int *mergedArr = new int[mergedSize];

    mergeArrays(arr1, size1, arr2, size2, mergedArr);

    cout << "Merged array: ";
    displayArray(mergedArr, mergedSize);

    cout << "Press any key to exit...";
    getch();
}