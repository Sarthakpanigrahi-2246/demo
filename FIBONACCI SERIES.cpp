#include<iostream>
using namespace std;
int main()
{
	int i;
	int n1=0,n2=1,n3;
	cout<<"adding 1 by 1:"<<endl;
	cout<< n1<<endl;
	cout<<n2<<endl;
	for(i=0;i<=17;i++)
	{
		n3=n1+n2;
		cout<<n3<<endl;
		n1=n2;
		n2=n3;

	}
	return 0;
}

