//Q. find the maximum value out of all the element in the array.

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int arr[]={44,52,24,35,16,33.3};
	int mx=arr[0]; 
	for(int i=0;i<=5;i++)
	{
	//if(arr[i]>mx) mx=arr[i];       //12,13 line me se konse bhi use kar sakte hi option hai.
	mx=max(mx,arr[i]);	
	}cout<<mx;
	
}
