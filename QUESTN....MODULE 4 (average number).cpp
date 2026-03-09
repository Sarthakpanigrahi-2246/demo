// MODULE 4 QUESTION
// find the average of 5 integers nd print the output upto 5 decimals.

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cin>> a >> b >> c >> d >> e;
	int sum= a+b+c+d+e;
	cout<<fixed<<setprecision(5)<<(float)sum/5 <<endl;
	return 0;
}
