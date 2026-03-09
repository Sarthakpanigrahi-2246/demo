#include<iostream>
using namespace std;
int main()
{
	int arr[100]={10,20,30,40,50};
	 int n;
	 n=sizeof(arr)/sizeof(int);
	 cout<<n<<endl;
	 for(int i=0;i<=n-1;i++)
	 {
	 	cout<<arr[i]<<",";
	 }
	 cout<<endl;
	
	return 0;
}

