#include<iostream>
using namespace std;
int main()
{ 
	int arr[2][3]={3,6,3,8,9,6};
	for(int i=0; i<2;i++)
	{
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" | ";
		}cout<<endl;
	}
}
 
