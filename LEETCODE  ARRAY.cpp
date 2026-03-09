#include<iostream>
using namespace std;
int main()
{
	int ans=0;
	int size;
	cin>>size;
	int arr[7]={6,3,6,3,7,7,5};
	for(int i=0; i<=size; i++)
	{
		ans =ans^arr[i];
	}
}

