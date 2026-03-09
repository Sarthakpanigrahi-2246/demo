#include<iostream>
using namespace std;
void selectionsort(int arr[], int size)
{
	for( int i=0; i<=size-1; i++)
	{
		int minindex=i;
		for(int j=i+1; j<size; j++)
		{
			if(arr[j]<arr[minindex])
			minindex=j;
		} 
		int temp=arr[minindex];
		arr[minindex]=arr[i];
		arr[i]=temp;
	}
}
int main()
{
	int arr[]={1,3,2,7,11,8};
//	int size=sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr ,6);
	cout<<"your array are sorted successfully."<<endl;
	for(int i=0; i<6; i++)
	{
	cout<<arr[i]<<"  ";
	}	
}
	
