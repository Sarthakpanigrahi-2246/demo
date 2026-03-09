#include<iostream>
using namespace std;

void inmoney(int *moneyptr) 
{          // *moneyptr is a actual bucket.
	cout<<moneyptr<<endl;
	//now using dereference operator.
	(*moneyptr)=2*(*moneyptr); //using drf opr we modify the actual bucket
	cout<<(*moneyptr)<<endl;
}
int main()
{
	int money=10;
	//pass by reference variable using pointer.
	inmoney(&money);// address of variable.
	cout<<"main:"<<money<<endl;
	return 0;
}
