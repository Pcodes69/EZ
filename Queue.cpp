#include<iostream.h>
#include<conio.h>
#include<process.h>

#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void insert() {
    int item;
    if (rear == SIZE - 1)
        cout << "Queue Overflow\n";
    else {
        if (front == -1) {
            front = 0; }
        cout << "Insert the element in queue : ";
        cin >> item;
        rear = rear + 1;
        queue[rear] = item;
    }
}

void del() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow\n";
        return;
    }
    else {
        cout << "Element deleted from queue is : " << queue[front] << endl;
        front = front + 1;
    }
}

void display() {
    if (front == -1)
        cout << "Queue is empty\n";
    else {
        cout << "Queue elements are : ";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}

void main() {
    clrscr();
    int choice;
    cout << "Mohammed Petiwala 046";
    do {
        cout << "\n1.Insert\n";
        cout << "2.Delete\n";
        cout << "3.Display\n";
        cout << "4.Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice) {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
            break;
        default:
            cout << "Invalid choice\n";
        }
    } while (choice != 4);
    getch(); 
}