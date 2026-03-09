//copy the content of one array into another in reverse order.
#include<iostream>
using namespace std;
int main()
{
	int a[]={2,4,6,7,9}; 
	int n=sizeof (a)/4;
	int b[n];
	
	for(int i=0;i<n;i++)
	{
		int	j=n-1-i;
		b[i]=a[j];
		cout<<b[i]<<",  ";
	}cout<<endl;
}
