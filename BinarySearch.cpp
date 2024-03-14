#include<iostream.h>
#include<conio.h>

 void main()
{
clrscr();
cout << "Mohammed Petiwala 046";
int i, num, n, position;
int *a = new int[n];
cout<<"\nEnter the array size : ";
cin>>n;
cout<<"Enter Array Elements : ";
for(i=0; i<n; i++)
{
cin>>a[i];
}
cout<<"Enter element to be searched : ";
int s,first,last,mid;
cin>>s;
first=0;
last=n-1;
mid=(first+last)/2;
while(first<=last)
   {
      if(a[mid]<s)
         {
            first=mid+1;
         }
      else if(a[mid]==s)
         {
            cout<<s<<" found at index "<<mid;
            break;
         }
      else
         {
            last=mid-1; 
         }
     mid=(first+last)/2;
   }
if(first>last)
   {
      cout<<"Not found";
   }
getch();
}

