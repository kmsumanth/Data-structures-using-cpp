#include<iostream>
using namespace std;
void printArray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
	int a[5],n;
	cout<<"Enter the number of elements "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the elements at location "<<i<<endl;
		cin>>a[i];
	}
	cout<<"The entered array is "<<endl;
	printArray(a,n);
	cout<<"Sorting the array using Bubble sort "<<endl;
	bool flag=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
	cout<<"The sorted array is "<<endl;
	printArray(a,n);
	return 0;
}
