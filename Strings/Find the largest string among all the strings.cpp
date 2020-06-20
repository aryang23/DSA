//By Aryan Grover(@aryang23)
//Find the largest string among all the strings
#include<iostream>
using namespace std;
int main()
{
	int n,l;
	cin>>n;
	string s,s2;
	cin.get();
	while(n--)
	{
		getline(cin,s);
		if(s.length()>s2.length())
		{
			s2=s;
			l=s.length();
		}
	}
	cout<<s2<<endl<<l;
}

//By Aryan Grover(@aryang23)
