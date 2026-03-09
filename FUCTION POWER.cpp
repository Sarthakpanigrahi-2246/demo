//finding the power unlimied time uing function
#include<iostream>
#include<math.h>
using namespace std;
int power()
{
	int a,b;
	cout<<"enter the  first num: ";
	cin>>a;
	cout<<"enter the  second num: ";
	cin>>b;
	int ans=1;
	for(int i=1; i<=b; i++)
	{
		ans=ans*a;
	}
	return ans;
}
int main()
{
	int a,b;
	int ans =power();
	cout<<"ans is :"<<ans;
	cout<<endl;
	
	cout<<"ans is :"<<power();
	cout<<endl;
	
	cout<<"ans is :"<<power();
	cout<<endl;
	
}

