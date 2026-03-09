#include<iostream>
using namespace std;
int main()
{
	cout<<(float)5/3 <<endl;
	char letter='A';
	cout<<letter<<endl;
	cout<<(char)(letter +2)<<endl; //we say do not treat (letter +2) as integer but treat this value as char
	
	 cout<<(bool)5+3;   /* any non zero number treating as true  and the (+) operator treat as integers
	                        (bool)5 its a boolean value thats true + 3 is equal 4.                            */
	
	return 0;
}
