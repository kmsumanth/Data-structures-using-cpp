#include<iostream>
using namespace std;
void find_min_max(int arr[],int n)
{
	int ans[2];
	ans[0]=arr[0];//min
	ans[1]=arr[0];//max
	for(int i=0;i<n;i++)
	{
		if(arr[i]<ans[0])
		{
			ans[0]=arr[i];
		}
		if(arr[i]>ans[1])
		{
			ans[1]=arr[i];
		}
	}
	cout<<"the minimum element in the array is "<<ans[0]<<" and the maximum element in the array is "<<ans[1]<<endl;
}
int main()
{
	int a[10],n;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the element at location "<<i<<endl;
		cin>>a[i];
	}
	find_min_max(a,n);
	
}
