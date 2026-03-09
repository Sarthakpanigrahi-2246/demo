// while loop     //Q.. read N number and find their sum
#include<iostream>
using namespace std;
int main()             
{         
	int n;
	cout<<"hom many time you want="<<endl;
	cin>>n;
	int i=1;//track the number of the loop is going to run.
	int sum;
	while(i<=n)
	{
		int no;
		cout<<" 1.enter the number=";
		cin>>no;
		sum=sum+no;
		i=i+1;
	}
	cout<<"total sum is=";
	cout<<sum<<endl;
	cout<<"nice";
return 0;
}
