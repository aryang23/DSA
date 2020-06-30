//VECTORS
//By Aryan Grover(@aryang23)
//Dynamic Array
//It will make its size 2 times
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> a;
	//We can define suze too or if we don't want we can leave too
	vector<int> b(5,10); //Five init with value of each as 10
	vector<int> c(b.begin(),b.end());
	vector<int> d{1,2,3,4,5};
	
	//Iterate Over the Vector
	for(int i=0;i<c.size();i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<endl;
	
	//Method 2
	for(auto it=b.begin();it!=b.end();it++)
	{
		cout<<(*it)<<",";
	}

    //Method 3
    //For Each Loop
    cout<<endl;
    for(int x:d)
    {
        cout<<x<<",";
    }

    //More Functions
    vector<int> v;
    int n,no;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>no;
        v.push_back(no);
    }
    cout<<endl;
    for(int s:v)
    {
        cout<<s<<",";
    }

    //Push Back do 2 things one is insert and other is double the size too

    //Some More functions
    cout<<v.max_size()<<endl;// Gives The Maximum Size by which a vector can expand
    cout<<v.size()<<endl; //Size of the array or number of elements
    cout<<v.capacity()<<endl; //Total elements present
    
    //It's not good to use the vector without the size as the push_back operation is very expensive 
    //As it will directly double the size of the vector so will waste a lot of space
    
    //Better declare like this, 
    vector<int> e[100];
    //We can even push more elements in the vector after 100 and then it will start doubling itself 
	
}
