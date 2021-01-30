#include<iostream>
using namespace std;
int add (int a , int b)
{
	return (a+b);
}
int sub (int a , int b)
{
	return (a-b);
}
int main ()
{
	string sum;
	
	cout<<"Hello World \n";
	cin>>sum;
	string i="add";
	string j="sub";
	int inini=10;
	if (i==sum)
	{
		inini=add(10,6);
	}
	else if(j==sum)
	{
		inini=sub(10,6);
	}
    cout<<"Hello World \n"<<inini;
   	
}

