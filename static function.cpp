#include<iostream>
using namespace std;

class hello{
	int id;
	static int count;
	public :
		void getdata(){
			cout<<"enter the id"<<id<<endl;
			count++;
		}
		static void print(){
			//cout<<"the id is "<<id<<endl; --> it is unable to access the other elements 
			cout<<"the count is "<<count<<endl; // it can only access to the static functions 
		}
	};
int hello :: count;
int main()
{
	hello s1;
	s1.getdata();
	s1.print();
	return 0;
}