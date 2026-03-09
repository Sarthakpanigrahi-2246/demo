// BREAK STATEMENT  Q check if given number prime or Not.
#include<iostream>
using namespace std;
int main()             
{
	int N;
	cin>>N;
	int i;
	for(i=2;i<N;i++)
	{
		if(N%i==0)
		{ 
		break;
		}
	}
	if(i==N)
	{
		cout<<"prime";
	}
	else{
		cout<<"not prime";
	}
	
	 
	return 0;
}
	
