//program to reverse the array withut using extra array.
#include<iostream>
using namespace std;
int main()
{
	int a[]={2,4,6,7,9}; 
	int n=sizeof (a)/4;
	for(int i=0;i<n;i++)
	{
	cout<<a[i]<<" ";}
	int i=0;
	int j=n-1;
	while(i<j)
	{
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}cout<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
