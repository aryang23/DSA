//Power (a,n)
//By Aryan Grover(@aryang23)
#include<iostream>
using namespace std;
int powerr(int a,int n)
{
	if(n==0)
	return 1;
	return a*powerr(a,n-1);
}
int main()
{
	int a,n;
	cin>>a>>n;
	cout<<powerr(a,n);
}

//5 3
//5 2	5 1		




Method 2
//Power a,n
//By Aryan Grover(@aryang23)
#include<iostream>
using namespace std;
int powerr(int a,int n)
{
	if(n==0)
	return 1;
	int smallAns=powerr(a,n/2);
	smallAns*=smallAns;
	if(n%2==0)
	{
		return smallAns;
	}
	else
	return a*smallAns;
}
int main()
{
	int a,n;
	cin>>a>>n;
	cout<<powerr(a,n);
}

//3^4=3^2*3^2
//3^5=3*3^2*3^2
