//Number to Spellings
//2048
//By Aryan Grover (@aryang23)
#include<iostream>
using namespace std;
char words[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void printSpellings(int n)
{
	//Base Case
	if(n==0)
	return;
	
	//Rec Case, First Print the Spellings
	printSpellings(n/10);
	int digit=n%10;
	cout<<words[digit]<<" ";
	return;
}
int main()
{
	int n;
	cin>>n;
	printSpellings(n);
	
}
