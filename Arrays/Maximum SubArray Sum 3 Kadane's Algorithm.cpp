//By Aryan Grover(@aryang23)

//KADANE's Algorithm
//2 variables cs=0,ms=0 start iterating change cs and if cs is negative then make cs =0 otherwise take ms as maximum of cs and ms

//O(N) Approach

#include<iostream>
using namespace std;
int main()
{
	int n,no,cs=0,ms=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>no;
		cs+=no;
		if(cs<0)
		cs=0;
		ms=max(ms,cs);
	}
	cout<<ms;

}

//By Aryan Grover(@aryang23)
