#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

class point
{
public :
	int x;
	int y;
public:

   point(int xx=0,int yy=0)
   {
	   xx=x;
	   yy=y;
   }
};

int main()
{
	vector <point> vp1;
	vector <point>::iterator vp1_itr;
	vector <point>::reverse_iterator vp1_ritr;

	//point p1(5,6);
	//point p2(4,6);
	//point p3(3,2);

	//vp1.push_back(p1);
	//vp1.insert(vp1.end(),p2);
	//vp1.push_back(p3);

	point *p=new point();

	for(int i=0; i< 6 ; i++)
	{
		p->x=i+5;
		p->y=i+5;
		vp1.push_back(*p);
	}

	cout<< "Entered order"<<endl;

	for(vp1_itr=vp1.begin();vp1_itr != vp1.end() ; vp1_itr++)
	{
		cout<<"X="<<vp1_itr->x<<"  "<<"Y="<<vp1_itr->y<<endl;
	}

	cout<< "reverse order"<<endl;

	for(vp1_ritr=vp1.rbegin();vp1_ritr != vp1.rend() ; vp1_ritr++)
	{
		cout<<"X="<<vp1_ritr->x<<"  "<<"Y="<<vp1_ritr->y<<endl;
	}

	cout<< "reverse order"<<endl;
	//vp1.empty();

	delete[] p;

	cout<< "Entered order"<<endl;

	for(vp1_itr=vp1.begin();vp1_itr != vp1.end() ; vp1_itr++)
	{
		cout<<"X="<<vp1_itr->x<<"  "<<"Y="<<vp1_itr->y<<endl;
	}

	cout<< "Sort"<<endl;

	sort(vp1.begin(),vp1.end(), greater<point>());

	for(vp1_itr=vp1.begin();vp1_itr != vp1.end() ; vp1_itr++)
	{
		cout<<"X="<<vp1_itr->x<<"  "<<"Y="<<vp1_itr->y<<endl;
	}


	return 0;
}