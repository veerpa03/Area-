#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
class circle
{
	public:
		float a,r;
		void area()
		{
			cout<<"\nenter the radius of circle";
			cin>>r;
			a=(3.14*(r*r));
			cout<<"\nAREA ="<<a;
			ofstream f;
			f.open("CIRCLE.txt",ios::app);
			f<<"\nRADIUS\t\tAREA";
			f<<"\n"<<r<<"\t\t"<<a;
			f.close();
		}
};
class rectangle
{
	public:
		float a,l,b;
		void area()
		{
			cout<<"\nenter the lenght of rectangle";
			cin>>l;
			cout<<"\nenter the brea of rectangle";
			cin>>b;
			a=(l*b);
			cout<<"\nAREA ="<<a;
			ofstream f;
			f.open("RECTANGLE.txt",ios::app);
			f<<"\nLENGHT\t\t\tBRE\t\t\tAREA";
			f<<"\n"<<l<<"\t\t"<<b<<"\t\t"<<a;
			f.close();
		}
};
class square
{
	public:
		float a,l;
		void area()
		{
			cout<<"\nenter the lenght of square";
			cin>>l;
			a=(l*l);
			cout<<"\nAREA ="<<a;
			ofstream f;
			f.open("SQUARE.txt",ios::app);
			f<<"\nLENGHT\t\t\tAREA";
			f<<"\n"<<l<<"\t\t\t"<<a;
			f.close();
		}
};
class triangle
{
	public:
		float a,l,h;
		void area()
		{
			cout<<"\nenter the lenght of triangle";
			cin>>l;
			cout<<"\nenter the height of triangle";
			cin>>h;
			a=0.5*(l*h);
			cout<<"\nAREA ="<<a;
			ofstream f;
			f.open("TRIANGLE.txt",ios::app);
			f<<"\nLENGHT\t\t\tHEIGHT\t\t\tAREA";
			f<<"\n"<<l<<"\t\t\t"<<h<<"\t\t\t"<<a;
			f.close();
		}
};
int main()
{
	circle c;
	rectangle r;
	square   sq;
	triangle t;
	int s;
	do
	{
		cout<<"\n1=>> CIRCLE";
		cout<<"\n2=>> RECTANGLE";
		cout<<"\n3=>> SQUARE";
		cout<<"\n4=>> TRIANGLE";
		cout<<"\n5=>> EXIT";
		cin>>s;
		if(s==1)
		{
			c.area();
		}
		else if(s==2)
		{
			r.area();
		}
		else if(s==3)
		{
			sq.area();
		}
		else if(s==4)
		{
			t.area();
		}
		else if(s==5)
		{
			break;
		}
		
	}while(s!=5);
}
