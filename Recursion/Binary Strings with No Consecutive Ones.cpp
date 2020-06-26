//Binary Strings with No Consecutive Ones
//By Aryan Grover (@aryang23)
#include<bits/stdc++.h>
using namespace std;
int bs(int n)
{
	if(n==0 or n==1)
	return n;
	return bs(n-1)+bs(n-2);
}
int main()
{
	int n;
	cin>>n;
	cout<<bs(n+2);
}
