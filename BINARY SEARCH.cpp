#include<iostream>
using namespace std;
int binarysearch(int arr[],int size, int key)
{
	int start=0;
	int end=size-1;
	int mid=(start+end)/2;
	while(start<=end)
	{
		if(arr[mid]==key){
		return mid;
	}
	if(key>arr[mid]){
		start=mid+1;
	}else{
		end=mid-1;
	}
	mid=(start+end)/2;
	}
	return -1;
	}

int main()
{
	int even[6]={2,4,6,11,13,16};
	int index=binarysearch(even,6,13);
	cout<<"index is 13: "<<index<<endl;
	int 2index=binarysearch(even,6,6);
	cout<<"index is 6: "<<2index<<endl;
	int 3index=binarysearch(even,6,14);
	cout<<"index is 14: "<<3index;
}
