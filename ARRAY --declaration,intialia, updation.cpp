#include<iostream>
using namespace std;
int main()
{
	int arr[5];                //declartion
	cout<<"enter the num:";
	for(int i=0;i<=4;i++)     /* array initialisation*/
	{
		cin>>arr[i];
	}
	for(int i=0;i<=4;i++)
	{
		cout<<arr[i]<<"  ";  
	}
	cout<<endl;                   
	arr[1]=50;                 //we can update also array 
	for(int i=0;i<=4;i++)
	{
		cout<<arr[i]<<"  ";
	}	
}
