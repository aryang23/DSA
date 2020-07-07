//MAPS STL
//It uses BST
//By Aryan Grover(@aryang23)
#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<string,int> m;
	
	//1. Insert
	m.insert(make_pair("Mango",100));
	
	//M2
	pair<string,int> p;
	p.first="Apple";
	p.second=120;
	m.insert(p);
	
	//M3
	m["Banana"]=40;
	
    
    

	//2. Search
	string fruit;
	cin>>fruit;
    //4.Update the Price
    m[fruit]+=20;
	//3. Erase
    m.erase(fruit);
	auto it=m.find(fruit);
	if(it!=m.end())
	{
		cout<<"Price of "<<fruit<<" is "<<m[fruit]<<endl;
	}
	else
	cout<<"Fruit is not present"<<endl;
    //Another Way to find a particular way

    //It stores unique keys only once
    if(m.count(fruit))
    {
        cout<<"Price is "<<m[fruit]<<endl;
    }
    else
    cout<<"Couldn't find the fruit";

    //Iterate Over All the Key Value Pairs
    m["litchi"]=60;
    m["pineapple"]=140;

    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" and "<<it->second<<endl;
    }
    for(auto p:m)
    {
        cout<<p.first<<":"<<p.second;
    }
}


