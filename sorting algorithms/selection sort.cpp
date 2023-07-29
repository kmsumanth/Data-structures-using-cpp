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
	int a[5];
	int n;
	cout<<"Enter the number of elements "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the Element at Location "<<i<<endl;
		cin>>a[i];
	}
	cout<<"The Entered Elements are "<<endl;
	printArray(a,n);
	cout<<"Sorting the array using Selection Sort "<<endl;
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			
			if(a[j]<a[i])
			{
				min=j;
			}
			if(min!=i)
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		
	}
	cout<<"The sorted array is "<<endl;
	printArray(a,n);
	return 0;
}
