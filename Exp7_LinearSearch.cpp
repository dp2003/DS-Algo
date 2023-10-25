#include<iostream>
#include<conio.h>
using namespace std;
main()
{

	int arr[10], i, num, n, check=0, index;
	cout<<"Enter the array size : ";
	cin>>n;
	cout<<"Enter Array Elements : ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the number to be search : ";
	cin>>num;
	for(i=0; i<n; i++)
	{
		if(arr[i]==num)
		{
			check=1;
			index=i+1;
			break;
		}
	}
	if(check==0)
	{
		cout<<"Number not found..!!";
	}
	else
	{
		cout<<num<<" found at Index : "<<index;
	}
	getch();
}
