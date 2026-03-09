#include<iostream>
//#include<cstring>
using namespace std;
int main()
{
	int phone=20;
	int money;
	cout<<"enter the money=";
	cin>>money;
	if(money>phone)
	{
		cout<<"you can by the phone"<<endl;
	}
	if(money>30)
	{
		cout<<"you go for picnic"<<endl;
	}
	if(money>40)
	{
		cout<<"you can also by the best mobile"<<endl;
	}
	else 
	{
		cout<<"you watch pogo";
	} 
	
	return 0;
}
