#include<iostream>
using namespace std;
void printarray(int arr[],int size)
{
	for (int i=0; i<size; i++)
	{
		cout<<arr[i]<<"  ";
	}
}
void alter(int arr[], int size)
{
	for( int i=0; i<size; i+=2)
	{
		if(i+1<size)
		{
			swap(arr[i],arr[i+1]);
		}
	}
}
int main()
{
	int arr[6]={1,3,2,7,11,8};
	alter(arr,6);
	printarray(arr,6);
	
}
	
