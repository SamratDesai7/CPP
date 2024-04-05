#include<iostream>

using namespace std;

	class employee
	{
		int id;
		public :
		static int  count;
		string name;
		void getdata();
		void show();
	};
	void employee :: getdata(){
		cout<<"Enter the name of employee:"<<endl;
		cin>>name;
		cout<<"Enter the employee id"<<endl;
		cin>>id;
		count++;
	}
	void employee :: show(){
		
		cout<<"name of employee "<<name<<" id of employee is :"<<id<< " and this is Employee no "<<count<<endl;
	
	}
	int employee ::count=100;
int main()
{
	employee a,b,c,d,e;
	a.getdata();
	a.show();
	
	b.getdata();
	b.show();
	
	c.getdata();
	c.show();
	
	d.getdata();
	d.show();
	
	e.getdata();
	e.show();
	return 0;	
}