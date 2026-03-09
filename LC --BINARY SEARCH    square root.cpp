#include<iostream>
using namespace std;
long long int binarysoln(int n)
{
	int s,e;
	s=0;
	e=n;
	long long int mid = s+(e-s)/2;
	
	long long int square=mid*mid;
	if ( square==n)
	retun mid;
	
	if(square<n)
	{
		ans=mid;
		s=mid +1;
	}
	else{
		e=mid+1;
		
	}mid = s+(e-s)/2;
	return ans;
	
}


int main()
{
	int mysqrt(int x);
	{
		return binarsoln(x);
	}
	
}
