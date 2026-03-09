#include<iostream>
using namespace std;
int factorial(int f)
{
	 int ans=1;
	for(int i=1; i<=f; i++){
		ans=ans*i;
	}
	return ans;
}
int main()
{
	int f=factorial(5);
	cout<<f;
	return 0;
}
