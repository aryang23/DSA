//Recursive Function to multiply 2 Numbers without *
//By Aryan Grover(@aryang23)
#include<iostream>
using namespace std;
int mul(int a,int b)
{
	//BC
	if(b==1)
	return a;
	//Recursive Case
	return a+mul(a,b-1);
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<mul(a,b);
}
// 3*4 =3+3+3+3
