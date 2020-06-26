//Friends Pairing Problem
//By Aryan Grover (@aryang23)
#include<bits/stdc++.h>
using namespace std;
int friendsPP(int n)
{
	if(n<=1)
	return 1;
	return friendsPP(n-1)+(n-1)*friendsPP(n-2);
}
int main()
{
	int n;
	cin>>n;
	cout<<friendsPP(n);
}
