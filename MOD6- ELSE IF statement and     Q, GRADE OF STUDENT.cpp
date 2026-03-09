// grade of the student based upon the marks
#include<iostream>
using namespace std;
int main()             
{         
	int mark;
	cin>>mark;
	if(mark>=81 && mark<=100)
	{
		cout<<"your grade 'A' grade"<<endl;
	}
	else if(mark<=80 && mark>=61)
	{
		cout<<"your grade 'B' grade"<<endl;
	}
	else if(mark<=60 && mark>=41)
	{
		cout<<"your grade 'C' grade"<<endl;
	}
	else
	{
		cout<<"your grade 'D' grade"<<endl;
	}         
return 0;
}
	
