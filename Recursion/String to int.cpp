//String to int
//By Aryan Grover (@aryang23)
#include<iostream>
#include<cstring>
using namespace std;
int stringToInt(char *a,int n)
{
	if(n==0)
	return 0;
	
	int lastDigit=a[n-1]-'0';
	int smallDigit=stringToInt(a,n-1);
	
	return smallDigit*10+lastDigit;
}
int main()
{
	char a[]="1234";
	int len=strlen(a);
	int x=stringToInt(a,len);
	cout<<x;
}
