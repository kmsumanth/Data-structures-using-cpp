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
	cout<<"Enter the number of Elements "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the element at Location "<<i<<endl;
		cin>>a[i];
	}
	cout<<"The Entered Elements are "<<endl;
	printArray(a,n);
	cout<<"Sorting the Array using Insertion Sort "<<endl;
	for(int i=1;i<n;i++)
	{
		int temp=a[i];
		int j=i-1;
		while(j>=0&&a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	cout<<"The sorted array is "<<endl;
	printArray(a,n);
	return 0;
	
}
