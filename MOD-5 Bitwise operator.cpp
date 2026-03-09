#include<iostream>
using namespace std;
int main()
{
	//Binary AND (&)
	cout<<AND<<endl;
	cout<<(5&7)<<endl; // isme bas ek and ka use kiya hai ex.5=101 and 7=111 (AND) karne ke baad (5) hi aayega.
	cout<<(5&6)<<endl;
	
	//Binary OR (|)
	cout<<OR<<endl; 
	cout<<(5|7)<<endl;
	cout<<(5|7)<<endl;// isme bhi ek or ka use kiya hai ex. 5=101 and 7=111 (OR) karne ke baad (7) hi aayega.
	
	//Binary XOR (^)
	cout<<(5^7)<<endl;// isme dono number same hu to (0) aata hai.otherwise number aayega.
	cout<<(5^7)<<endl;
	
	//Binary one compliment (~) 
	cout<<(~8)<<endl;
	cout<<(~1)<<endl;
	cout<<(~0)<<endl; 
	
	//left shift (<<)
	cout<<(5<<7)<<endl;
	cout<<(4<<7)<<endl;
	cout<<(4<<9)<<endl;
	
	//right shift (>>)
	cout<<(5>>7)<<endl;
	cout<<(4>>7)<<endl;
	cout<<(4>>9)<<endl;
	return 0;
}

