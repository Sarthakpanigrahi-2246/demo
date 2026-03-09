//Q. calculate the sum of all the element in the given array.

#include<iostream>
using namespace std;
int main()
{
	int arr[]={44,52,24,35,16};
	int sum;
	cout<<"total sum is:";
	for(int i=0; i<=4; i++)
	{
		cout<<arr[i]<<" ";
		sum +=arr[i];
		
    }
	cout <<endl; 
	cout<<sum;
}
