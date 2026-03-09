#include<iostream>
using namespace std;
int main()
{
	int x= 10;
	cout<<"address : "<<&x<<endl;   // 6 and 8 line address will same.
	int * xptr = &x;
	cout<<"address of X : "<<xptr<<endl;
	cout<<"adress of xptr : "<<&xptr<<endl; //9 and 11 line address will same.
	int ** xxptr= &xptr;
	cout<<"address of : " <<xxptr<<endl; // pointer to pointer address.
	
	
	float y=5.5;
	cout<<"address:"<<&y<<endl;
	float * ypt;
	ypt =&y;
	cout<<"address of y:"<<ypt<<endl;
	
	char A = 'a';
	cout<<&A<<endl;
	char *chao;
	chao=&A;
	cout<<chao<<endl;
	
	return 0;
}
	
