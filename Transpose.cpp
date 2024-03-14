#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main()
{
	clrscr();
	int a[5][5],b[5][5],j,k;
	cout<<"Mohammed Petiwala 046";
	cout<<"\nEnter Array Elements:";
	for(j=0;j<4;j++)
	{
		for(k=0;k<4;k++)
		{
			cin>>a[j][k];

		}
	cout<<"\n";
	}
	for(j=0;j<4;j++)
	{
		for(k=0;k<4;k++)
		{
			b[j][k]=a[k][j];
			cout<<b[j][k]<<"\t";
		}
		cout<<"\n";
	}
	getch();
}
