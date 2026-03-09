// this code is right but not compile in c++ compiler its compile on g++ compiler.
#include<iostream>
using namespace std;
int main()                           /*because of it is fpermissive G++ */
{
	int arr[100];
	cout<<sizeof(arr)/sizeof(int)<<endl;
	int n;
	cin>>n;
	for(int i=0; i<n; i++) //when we increased the numbr and give a numbr up to 5 then other are garbage value.
	{
		cin>>arr[i];
	}
	cout<<arr[i];
	
	return 0;
}

