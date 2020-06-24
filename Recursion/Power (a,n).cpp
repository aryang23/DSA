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
	if(n%2==0)
	{
		return powerr(a,n/2)*powerr(a,n/2);
	}
	else
	return a*powerr(a,n/2)*powerr(a,n/2);
}
int main()
{
	int a,n;
	cin>>a>>n;
	cout<<powerr(a,n);
}

//3^4=3^2*3^2
//3^5=3*3^2*3^2
