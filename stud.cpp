#include<iostream>
using namespace std;
class Student
{
public:
    string name;
    int m1,m2,m3;
    double per;
    void input()
    {
        cout<<"Enter Student Name:"<<endl;
        cin>>name;
        cout<<"Enter First Subject Marks: "<<endl;
        cin>>m1;
        cout<<"Enter second Subject Marks: "<<endl;
        cin>>m2;
        cout<<"Enter third Subject Marks: "<<endl;
        cin>>m3;
    }
    void calculate()
    {
        per=( m1+m2+m3)/3;
    }
    void show()
    {
        cout<<"The persentage of "<<name<<" is "<<per<<"%"<<endl;
    }
};
int main()
{
    Student s1;
    s1.input();
    s1.calculate();
    s1.show();   
    return 0;
}