#include "stdio.h"
#include "conio.h"
#include "iostream"
#include "string"
#include "map"
#include "fstream"
#include "iomanip"
#include "functional"

using namespace std;

typedef map<string,string,greater<string>> STRINGMAP;

typedef map<string,int>  WORDMAP;

int main(int argc,char *argv[])
{
	STRINGMAP dict1;
	STRINGMAP::const_iterator cdict1;

	cout<< "Insert--------------------------------------------------------------------------------";

	dict1.insert(std::pair<string,string>("rbk","23456789"));
	dict1.insert(std::pair<string,string>("rb","256789"));
	dict1.insert(std::pair<string,string>("rbrb","45454549"));

	cout<< left<<setw(20)<< "Name"<<setw(20)<<"Number"<<endl;

	for(cdict1=dict1.begin();cdict1 !=dict1.end();cdict1++)
	{
		cout<<left<<setw(20)<<(*cdict1).first<<setw(20)<<(*cdict1).second<<endl;
	}

    cout<< "erase--------------------------------------------------------------------------------";
	
	dict1.erase(++dict1.begin(),--dict1.end());
	dict1.erase("rb");

	cout<< left<<setw(20)<< "Name"<<setw(20)<<"Number"<<endl;

	for(cdict1=dict1.begin();cdict1 !=dict1.end();cdict1++)
	{
		cout<<left<<setw(20)<<(*cdict1).first<<setw(20)<<(*cdict1).second<<endl;
	}

	cout<< "--------------------------------------------------------------------------------";

	STRINGMAP dict;
	STRINGMAP::const_iterator cdict;

	dict["rb"]="9420030363";
	dict["ah"]="9405784244";
	dict["sa"]="23456789";
	dict["za"]="23";
	dict["sm"]="2789455612";

	cout<< left<<setw(20)<< "Name"<<setw(20)<<"Number"<<endl;

	for(cdict=dict.begin();cdict !=dict.end();cdict++)
	{
		cout<<left<<setw(20)<<(*cdict).first<<setw(20)<<(*cdict).second<<endl;
	}

	//word count
	cout<< "word count--------------------------------------------------------------------------------"<<endl;
	cout<< "----------------------------------------------------------------------------------------------"<<endl;

	WORDMAP wordmap;
	WORDMAP::const_iterator citr;
	const char *fname="MAP1.cpp";

	if(argc>1)
		fname=argv[1];

	ifstream in(fname);
	string word;

	while( in >> word)
		wordmap[word]++;

	cout<<setw(25)<<"word"<<setw(25)<<"count"<<endl;
	cout<<"---------------------------------------------------------"<<endl;

	for(citr=wordmap.begin();citr!=wordmap.end();citr++)
		cout<<setw(25)<<citr->first<<setw(25)<<citr->second<<endl;
//==========================================================================

	//WORDMAP charmap;
	//WORDMAP::const_iterator citr;
	//const char *fname="rb.txt";

	//if(argc>1)
	//	fname=argv[1];

	//ifstream in(fname);
	//string word;

	//// anagram
 //  // 

	//while( in >> word)
	//	wordmap[word]++;

	//cout<<setw(25)<<"word"<<setw(25)<<"count"<<endl;
	//cout<<"---------------------------------------------------------"<<endl;

	//for(citr=wordmap.begin();citr!=wordmap.end();citr++)
	//	cout<<setw(25)<<citr->first<<setw(25)<<citr->second<<endl;

	return 0;
}