#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
cout<<"Mohammed Petiwala 046";
int number;
cout<<"\nEnter total number of elements: ";
cin>>number;
int *a = new int[number];
int count=number;
cout<<"Enter elements: ";
for(int i=0;i<number;i++)
 {
  cin>>a[i];
 }
int k;
cout<<"Enter the position where you want the element to be inserted: ";
cin>>k;
int b;
cout<<"Enter the element to be inserted: ";
cin>>b;
while(count>=k)
 {
  a[count+1]=a[count];
  count--;
 }
 a[k]=b;
for(int j=0;j<=number;j++)
 {
  cout<<"After insertion:"<<a[j]<<"\n";
 }
 getch();
}
