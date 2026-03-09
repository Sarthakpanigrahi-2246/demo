#include<iostream>
using namespace std;
void change(int arr[])
{
	cout<<"after changing: ";
	arr[0]=9;
} 
int main()
{
	int arr[5]={1,2,4,5,6,};                //declartion
	cout<<"enter the num: ";
	for(int i=0;i<=4;i++)     /* array initialisation*/
	{
		cout<<arr[i]<<"  ";
	}cout<<endl;
	change(arr); 
	for(int i=0;i<=4;i++){
	cout<<arr[i]<<"  ";
}
}
