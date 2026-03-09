//ifnd the second largest element in the given array
#include<iostream>
using namespace std;
int main()
{
	int arr[]={2,4,6,8,7}; 
	int n=sizeof (arr)/4;
	int mx=INT_MIN;
	for(int i=0;i<n;i++)
	{
		mx=max(mx,arr[i]);
	}
	int smx=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=mx) smx=max(smx,arr[i]);
	}
	cout<<smx;
}
