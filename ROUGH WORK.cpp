#include<iostream>
using namespace std;
int alter(int arr[], int size)
{
	for( int i=0; i<=size-1; i++)
	{
		int minindex=i;
		for(int j=i+1; j<size; j++)
		{
			if(arr[j]<arr[minindex])
			minindex=j;
		}
		swap(arr[minindex],arr[i]);
}
}
int main()
{
	int arr[6]={1,3,2,7,11,8};
	int index=alter(arr,6);
	cout<<index;
	
}
	
