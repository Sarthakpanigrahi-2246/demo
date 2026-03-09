//to store roll no. and marks obtained by 4 student side by side in matrix.
#include<iostream>
using namespace std;
int main()
{ 
	int arr[4][2]={{2,63},{3,78},{6,99},{7,88}};
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<2;j++){
			cout<<arr[i][j]<<"  ";
		}cout<<endl;
	}
	
	
}

