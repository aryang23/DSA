//Fibbonaci Number
//By Aryan Grover(@aryang23)

//Fibbonaci Number
#include<iostream>
using namespace std;
int fibb(int n)
{
	if(n==0 or n==1)
	return n;
	return fibb(n-1)+fibb(n-2);
}
int main()
{
	int n;
	cin>>n;
	cout<<fibb(n);
}
