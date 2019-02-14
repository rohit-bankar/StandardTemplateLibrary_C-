#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <functional>
#include <algorithm>

using namespace std;

bool divisableby3(int num)
{
	if(num%3)
	{
		return true;
	}
	else
		return false;
}

int main()
{
	vector <int> v1;
	vector <int>::iterator vItr;

	v1.push_back(6);
	v1.push_back(7);
	v1.push_back(9);

    int iCnt=count_if(v1.begin(),v1.end(),divisableby3);
	cout<<iCnt<<endl;


	cout<<__LINE__<<endl;

	cout<<__FILE__<<endl;

	cout<<__DATE__<<endl;

	cout<<__TIME__<<endl;

	map <string,string> MAP;
	map <string ,string> ::iterator mapItr;

	MAP["rohit"]="78890";
	MAP["rb"]="234";

	string str1;
	cout<<"Enter Number to search::"<<endl;
	cin>>str1;

	mapItr=MAP.find(str1);
	cout<<mapItr->second;

	

	return 0;
}