// FOR LOOP    Q read N number and find the sum of number which are even.
#include<iostream>
using namespace std;
int main()             
{
	int n;
	int i;
	cout<<"you have enter this number:"<<endl;
	cin>>n;
	int sum = 0;
	for(i=1;i<=n;i++)
	{
		int no;
		cin>>no;
		if(no%2==0)
		{
		sum= sum+no;
		}
	}
	cout<<"sum of even number:"<<sum<<endl;
return 0;
}
