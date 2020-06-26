//Tower of Hanoi
//By Aryan Grover (@aryang23)
#include<bits/stdc++.h>
using namespace std;
void move(int n,char src,char dest,char help)
{
	//Base Case
	if(n==0)
	return;
	
	//Recursive Case
	//Move n-1 disks from A to B using C
	move(n-1,src,help,dest);
	//Move nth disk from A to C
	cout<<"Move "<<n<<" disk from "<<src<<" to "<<dest<<endl;
	//Move n-1 disks from B to C using A
	move(n-1,help,dest,src);
}
int main()
{
	int n;
	cin>>n;
	move(n,'A','C','B');
}
