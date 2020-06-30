//Lec 2
//More Methods of Vector
//By Aryan Grover(@aryang23)

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> d{1,2,3,4,5};
	//Push Back: - O(1) But when expanding it takes more time
	//Pop Back: - O(1)
	
	//Insert Some elements in the middle O(N) where N is no of elements added and number of elements shifted
	d.insert(d.begin()+3,100);//it will add 100 at 3rd one
	d.insert(d.begin()+3,4,50);//It will add 4 elements having value 50 starting from 3rd idx
	for(int e:d)
    {
        cout<<e<<",";
    }
	
	//Erase Some elements in middle
	d.erase(d.begin()+3);
	d.erase(d.begin()+2,d.begin()+5);
	for(int e:d)
    {
        cout<<e<<",";
    }
    
    //We avoid the shrink
    d.resize(8); //It will not work
    //Size becomes 8 and capacitty changes if size<capacity
    //Size and Cap both changes when size>capacity
    
    d.clear();
    //It will remove all elements so size 0 but capacity will be same
    //So It doesnt delete the memory
    
    if(d.empty())
    {
    	cout<<"This is empty vector";
	}
	
	d.push_back(10);
	d.push_back(11);
	d.push_back(12);
	cout<<v.front()<<endl;
	
	//To avoid doubling, we use reserve function
	d.reserve(1000);
}
