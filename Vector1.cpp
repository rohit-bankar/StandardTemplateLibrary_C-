#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>    

using namespace std;

int main()
{
	vector <int> v1;
	vector <int>::iterator itr;
	vector <int>::reverse_iterator v1_ritr;

	v1.reserve(4);
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.insert(v1.begin(),5);
	v1.push_back(7);
	v1.insert(v1.end(),50);
	//-----------------------------------------------------
	cout<< "entered order"<< endl;
	for(itr=v1.begin();itr!=v1.end();itr++)
	{
		cout<< *itr<< endl;
	}
    //-----------------------------------------------------
	cout<< "reverse order"<< endl;
	for(v1_ritr=v1.rbegin();v1_ritr!=v1.rend();v1_ritr++)
	{
		cout<< *v1_ritr<< endl;
	}
	//-----------------------------------------------------
	sort(v1.begin(),v1.end(),greater<int>());

	cout<< "Sorted in descending order"<< endl;
	for(itr=v1.begin();itr!=v1.end();itr++)
	{
		cout<< *itr<< endl;
	}
	//-----------------------------------------------------
	sort(v1.begin(),v1.end(),less<int>());

	cout<< "Sorted in ascending order"<< endl;
	for(itr=v1.begin();itr!=v1.end();itr++)
	{
		cout<< *itr<< endl;
	}
    //-----------------------------------------------------
	return 0;
}
