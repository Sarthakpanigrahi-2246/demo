#include<iostream>
using namespace std;
int area(int l,int b)
{
	return l*b;
}
int area(int l)
{
	return l*l;
}
int area(double l, double b)
{
	return l*b;
}
int area(char l, char b)
{
	return l*b;
}
int main()
{
	cout<<"square:"<<area(5)<<endl;
	cout<<"rectngle:"<<area(5,4)<<endl;
	cout<<"rectngle in unit:"<<area(6.8,8.8)<<endl;
	return 0;
}

