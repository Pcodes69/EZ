#include<iostream.h>
#include<conio.h>
#include<process.h>
class stack 
{ 
public: 
int top,i,stck[10]; 
stack() 
{ 
top=-1; 
} 
void push(int x) 
{ 
stck[++top]=x; 
cout<<"value inserted\n"; 
} 
void pop() 
{ 
stck[top--];
cout<<"deleted\n";
 }
 void disp();
 };
void stack::disp()
 {
   for(i=0;i<=top;i++)
   {
     cout<<"\n"<<stck[i];
   }
 }
void main()
{
stack s;
int n;
clrscr();
cout<<"\nMohammed Petiwala 046";
do
{
cout<<"\n1-push\n2-pop\n3-exit";
cin>>n;
switch(n)
{
 case 1:
     s.push(10);
     s.disp();
     break;
 case 2:
     s.pop();
     s.disp();
     break;
 case 3:
     exit(1);
     break;
 default:
     cout<<"invalid";
}
}
while(n==1||n==2||n==3);
getch();
}
