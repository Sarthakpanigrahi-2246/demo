// print numbr n to 1
/*#include<iostream>
// #include<stdio.h>
using namespace std;
void print(int x, int n)
{  if(x>n) return; // base work
    cout<<x<<endl; //work
    print(x+1,n);//call
}
int main()
{
    int n;
    cout<<"enter the numner:";
    cin>>n;
    print(1,n);
    return 0;
}*/


// print number 1 to n
#include<iostream>
using namespace std;
void print(int n)
{  
	if(n==0) return; // base case
	print(n-1);//call
    cout<<n<<endl;//work
}
int main()
{
    int n;
    cout<<"enter the numner:";
    cin>>n;
    print(n);
    return 0;
}

