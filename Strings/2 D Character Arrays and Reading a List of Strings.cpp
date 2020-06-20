//2 D Character Arrays and Reading a List of Strings
//By Aryan Grover (@aryang23)
#include<iostream>
using namespace std;
int main()
{
	char a[][10]={{'a','b','c','\0'},{'d','e','\0'},{'h','e','l','l','o','\0'}};
	cout<<a[0]<<endl;
	char b[][10]={"abc","def","ghi","hello"};
	cout<<b[1];
	
	char c[100][1000];
	int n;
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++)
	{
		cin.getline(a[i],1000);
	}
	
	//Print Out All the Strings
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}

//By Aryan Grover (@aryang23)
