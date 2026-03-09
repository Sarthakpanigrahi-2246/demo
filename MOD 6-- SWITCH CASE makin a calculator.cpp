#include<iostream>
using namespace std;
int main()             
{         
	int a,b;
	char op;
	cout<<"enter the number= ";
	cin>>a>>op>>b;
	cout<<"your calculation is= ";
	switch(op)
	{
		case'+':cout<<(a+b)<<endl;
		break;
		case'-':cout<<(a-b)<<endl;
		break;
		case'*':cout<<(a*b)<<endl;
		break;
		case'/':cout<<(a/b)<<endl;
		break;
		case'%':cout<<(a%b)<<endl;
		break;
		default:cout<<"invalid statement or input";
	}
	
return 0; 
}
