#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ 
	int a= 5;
	char b= 'assfergrtf';
	bool c= false;
	float d=2.40549533445;    
	double e=2.4054953343434; //double are use to higher calculation were we need exact value.
	
	//cin>>a>>b>>c>>d>>e;   // for user input we give cin>>a>> 
	
	cout<< a <<endl;
	cout<< b <<endl;
	cout<< c <<endl;
	cout<< d <<fixed << setprecision(7) <<endl;//float are give its making approxtiation and it not stored all the digit.
	cout<< e <<fixed << setprecision (11) <<endl;
	
	return 0;
}
