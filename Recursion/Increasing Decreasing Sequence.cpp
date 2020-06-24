//Increasing Sequence
//By Aryan Grover(@aryang23)
#include<iostream>
using namespace std;
void incc(int n)
{
	if(n==1)
	{
		cout<<"1,";
		return;
	}
	incc(n-1);
	cout<<n<<",";
}
int main()
{
	int n;
	cin>>n;
	incc(n);
}



//Decreasing Sequence
//By Aryan Grover(@aryang23)
#include<iostream>
using namespace std;
void decc(int n)
{
	if(n==0)
		return;
	cout<<n<<",";
	decc(n-1);
}
int main()
{
	int n;
	cin>>n;
	decc(n);
}
