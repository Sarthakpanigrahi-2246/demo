#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int x)
{
	for(int i=2; i<=x; i++){
	if (x%i==0){
		return 0;
		}
	}
	return 1;
}
int main()
{
	int x;
	cin>>x;
	if(isprime(x)) {
	cout<<"it is prime"	;
	}
	else
	{
		cout<<"not prime";
	}
  }  
