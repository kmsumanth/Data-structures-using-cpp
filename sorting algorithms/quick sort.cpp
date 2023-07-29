#include<iostream>
using namespace std;
void quicksort(int a[],int first,int last); 
void print(int arr[],int n);
int main()
{
	int n,a[10];
	
	cout<<"Enter the number of elements "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the element at location "<<i<<endl;
		cin>>a[i];
	}
	cout<<"The entered elements are "<<endl;
	print(a,n);
	cout<<"Sorting array using quicksort"<<endl;
	quicksort(a,0,n-1);
	cout<<"The sorted array using quicksort is "<<endl;
	print(a,n);
	return 0;
}
void quicksort(int a[],int first,int last)
{
	int i,j,pivot,temp;
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(a[i]<=a[pivot])
			i++;
			while(a[j]>a[pivot])
			j--;
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		quicksort(a,first,j-1);
		quicksort(a,j+1,last);
	}
}
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
