//Bucket Sort

//Sort Array of Students who scored marks in JEE Exam
//By Aryan Grover (@aryang23)
#include<iostream>
#include<vector>
using namespace std;
class student
{
	public:
		int marks;
		string name;
};

//Bucket Sort to an array of elements
void bucketSort(student s[],int n)
{
	//Assuming Marks are in Range 0-100
	vector<student> v[101];
	
	for(int i=0;i<n;i++)
	{
		int m=s[i].marks;
		v[m].push_back(s[i]);
	}
	for(int i=100;i>=0;i--)
	{
		for(auto it=v[i].begin();it!=v[i].end();it++)
		{
			cout<<(*it).name<<" "<<(*it).marks<<endl;
		}
	}
}
int main()
{
	student s[100];
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>s[i].marks>>s[i].name;
	}
    bucketSort(s,n);
}
