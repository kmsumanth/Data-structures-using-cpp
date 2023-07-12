#include<iostream>
using namespace std;
int main()
{
	int a,b,operation,ans;
	cout<<"Enter the num 1 "<<endl;
	cin>>a;
	cout<<"Enter the num 2 "<<endl;
	cin>>b;
	cout<<"**********Enter the choice**********"<<endl;
	cout<<"1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit"<<endl;
	cin>>operation;
	switch(operation)
	{
		case 1: ans=a+b;
				cout<<"the sum of "<<a<<" and "<<b<<" is "<<ans<<endl;
				break;
		case 2:ans=a-b;
				cout<<"the difference of "<<a<<" and "<<b<<" is "<<ans<<endl;
				break;
		case 3:ans=a*b;
				cout<<"the multiplication  of "<<a<<" and "<<b<<" is "<<ans<<endl;
				break;
		case 4:ans=a/b;
				cout<<"the division of "<<a<<" and "<<b<<" is "<<ans<<endl;
				break;
		case 5:exit(1);
		default:cout<<"Invalid option \n Please try again"<<endl;
	}
}
