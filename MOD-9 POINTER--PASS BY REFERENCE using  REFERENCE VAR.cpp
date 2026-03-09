#include<iostream>
using namespace std;
void incmoney (int &mymoney)
{
	mymoney=2*(mymoney);
	cout<<"my money:"<<mymoney<<endl;
}
int main ()
{
	int money=10;
	incmoney(money);
	cout<<"main money:"<<money<<endl;

	return 0;
}

