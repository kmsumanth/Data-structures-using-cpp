#include<iostream>
using namespace std;
int main()
{
	int n=10;
	cout<<"The Fibonnaci serires "<<endl;
	int a=0;
	int b=1;
	cout<<a<<endl;
	cout<<b<<endl;
	for( int i=2 ; i<n ; i++ )
	{
		int c=a+b;
		a=b;
		b=c;
		cout<<c<<endl;
	}
}
