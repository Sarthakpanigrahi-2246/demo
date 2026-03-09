#include<iostream>
using namespace std;
int firstocc(int arr[], int size, int key)
{
	int start =0;
	int end=size-1;
	int mid=(start+end)/2;
	int ans=-1;
	while(start<=end)
	{
		if(arr[mid]==key){
		ans=mid;
		end=mid-1;
		}
		else if(arr[mid]<key) //key is big the go right side
		{
			start=mid+1;
		}
		else if(arr[mid]>key)//key is small then go left side 
		{
			end= mid-1;
		}
		mid=(start+end)/2;
	}
	return ans;
}
int lastocc(int arr[], int size, int key)
{
	int start =0;
	int end=size-1;
	int mid=(start+end)/2;
	int ans=-1;
	while(start<=end)
	{
		if(arr[mid]==key){
		ans=mid;
		start=mid+1;
		}
		else if(arr[mid]<key) //key is big the go right side
		{
			start=mid+1;
		}
		else if(arr[mid]>key)//key is small then go left side 
		{
			end= mid-1;
		}
		mid=(start+end)/2;
	}
	return ans;
}
int main()
{
	int arr[9]={22,33,66,66,66,66,66,66,77};
	int index=firstocc(arr,9,66);
	int indexi=lastocc(arr,9,66);
	cout<<"first occurance of 66 is: "<<index<<endl;
	cout<<"last occurance of 66 is: "<<indexi;
}
