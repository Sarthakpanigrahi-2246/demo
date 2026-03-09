// without vector.
#include<iostream>
using namespace std;
int mountpeak(int arr[], int size)
{
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	while(start<end)
	{
		if(arr[mid]<arr[mid+1])
		{
			start=mid+1;
		}
		else{
		end=mid;
		}
	mid=start+(end-start)/2;
	}return start;
}
int main()
{
	int arr[]={2,5,7,10,15,20,25};
	int size= sizeof (arr)/ sizeof(arr[2]);
	int mount=mountpeak(arr,size);
	cout<<mount<<endl;
}
