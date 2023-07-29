#include<iostream>
using namespace std;
void print(int arr[],int n);
void mergesort(int arr[],int first ,int last );
void merge(int a[],int first,int mid,int last);
int main()
{
	int a[10],n;
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
	mergesort(a,0,n-1);
	cout<<"Printing the array after sorting "<<endl;
	print(a,n);

}
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
void mergesort(int arr[],int first ,int last )
{
	if(first<last)
	{
		int mid=(first+last)/2;
		mergesort(arr,first,mid);
		mergesort(arr,mid+1,last);
		merge(arr,first,mid,last);
	}
}
void merge(int a[],int first,int mid,int last)
{
	int i,j,k,b[25];
	i=first;
	k=first;
	j=mid+1;
	while(i<=mid&&j<=last)
	{	
		if(a[i]<a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	while(i<=mid)
	{
		b[k]=a[i];
		i++;
		k++;
		
	}
	while(j<=last)
	{
		b[k]=a[j];
		k++;
		j++;
	}
	for(int x=first;x<=last;x++)
	a[x]=b[x];
	
}
