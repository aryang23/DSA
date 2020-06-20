//strtok()

//By Aryan Grover(@aryang23)
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	//It accepts 2 string, one for breaking and other is breaker
	char s[100]="Today is a rainy Day";
	char *c=strtok(s," ");
	cout<<c<<endl; 
	while(c!=NULL)
	{
		c=strtok(NULL," ");
		cout<<c<<endl;
	}
	
}


//By Aryan Grover(@aryang23)
