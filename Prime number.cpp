#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cout<<"Enter the number "<<endl;
	cin>>n;
	/*
	int c=0;
	for(int i=1 ; i<=n ; i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		cout<<n<<" is a prime number "<<endl;
	}
	else
	{
		cout<<n<<" is a composite number "<<endl;
	}
	*/
	bool isPrime=1;
	for( int i=2 ; i<n ; i++ )
	{
		if(n%i==0)
		{
			cout<<n<<" is a composite number "<<endl;
			isPrime=0;
			break;
		}
	}
	if(isPrime)
	{
		cout<<n<<" is a prime number"<<endl;
	}
	
	return 0;
}
