#include <iostream.h>
#include <conio.h>

int factorial(int n) {
    if (n == 0 || n == 1){
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int fibonacci(int n) {
    if (n <= 1){
        return n;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void main() {
    clrscr();
    cout << "Mohammed Petiwala 046";
    int choice, num;
    char ch;

    do {
        cout << "\nChoose an operation:\n";
        cout << "1. Fibonacci Series\n";
        cout << "2. Factorial\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter the number of terms for Fibonacci Series: ";
                cin >> num;
                cout << "Fibonacci Series:\n";
                for (int i = 0; i < num; i++){
                    cout << fibonacci(i) << " ";
                }
                cout << endl;
                break;
            case 2:
                cout << "Enter the number to calculate factorial: ";
                cin >> num;
                cout << "Factorial of " << num << " is: " << factorial(num) << endl;
                break;
            default:
                cout << "Invalid choice!\n";
        }

        cout << "Do you want to continue (Y/N)? ";
        cin >> ch;
    } while (ch == 'Y' || ch == 'y');
}
