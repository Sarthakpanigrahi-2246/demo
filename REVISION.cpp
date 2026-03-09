#include<iostream>
using namespace std;
void change(int arr[])
{
	arr[0]=2;
}
int main()
{
	int arr[66]={11,3,5,6,7,8,9,4};
	int n;
	n=sizeof(arr)/sizeof (int);
	cout<<n;
	cout<<endl;
	change(arr);
	for(int i=0; i<=n-1; i++)
	{
		cout<<arr[i]<<"  ";
	}
	
}
