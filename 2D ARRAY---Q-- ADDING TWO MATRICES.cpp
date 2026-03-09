#include<iostream>
using namespace std;
void matrix() 
{
	int brr[2][3]={2,3,4,6,7,8};
	for(int i=0; i<2;i++)
	{
		for(int j=0; j<3;j++)
		{
			cout<<brr[i][j]<<" ";
		}cout<<endl;
	}
}
int main()
{ 
	int arr[2][3]={2,3,4,6,7,8};
	for(int i=0; i<2;i++)
	{
		for(int j=0; j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	cout<<endl;
	matrix();
}
