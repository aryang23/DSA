//Tiling Problem
//By Aryan Grover (@aryang23)
#include<bits/stdc++.h>
using namespace std;
int tiling(int n)
{
	if(n<=3)
	return 1;
	return tiling(n-1)+tiling(n-4);
}
int main()
{
	int n;
	cin>>n;
	//Suppose m=4 here that is tiles are of length 1*4
	cout<<tiling(n);
}
