#include<iostream>
using namespace std;
//void insertsort(int arr[], int n)
//{
//	for(int i=1; i<n; i++)
//	{
//		int temp=arr[i];
//		int j;
//		for(j=i-1; j>=0; j--)
//		{
//			if(arr[j]>temp)
//			{
//				arr[j+1]=arr[j];
//			}
//			else
//			{
//			break;
//			}
//	}
//	arr[j+1]=temp;
//	
//	}
//}

int main()
{
	int arr[]={6,4,5,2,1,3};
	int n=sizeof(arr);
//	insertsort(arr,6);
//	cout<<"successfully sorted."<<endl<<arr[6];for(int i=1; i<n; i++)
	int j;
	for(int i=1; i<n; i++)	
	{
		int temp=arr[i];
		
		for(j=i-1; j>=0; j--)
		{
			if(arr[j]>temp)
			{
				arr[j+1]=arr[j];
			}
			else
			{
			break;
			}
	}
	arr[j+1]=temp;
	}
	cout<<arr[j+1];

}
