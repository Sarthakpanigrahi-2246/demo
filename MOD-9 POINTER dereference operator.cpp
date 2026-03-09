#include<iostream>
using namespace std;
int main()
{
	int x=9;
	cout<<x<<endl; //it store the value of x.
	int * xptr = &x;// int xptr and storing the address of 'x'.
	cout<<xptr<<endl; //
	cout<<&xptr<<endl;// address of xptr.
	cout<<*xptr<<endl;/*using dereference operator we see the what adress stored in xptr and
	                        then we print the value of xptr*/
	cout<<*(&x);/*first stored the address of 'x' thenusing Drf oprtr what is the value stored in (&x)*/
	
	return 0;

}

