#include<iostream>
using namespace std;
struct student
{
    int rollno;
    string name;
    int age;
    float marks;
};

int main()
{
   struct student samrat;
   samrat.rollno = 14;
   samrat.name = "Samrat";
   samrat.age = 20;
   samrat.marks = 92.80;  

   cout<<"the roll no of student is "<<samrat.rollno<<endl;
   cout<<"the name of student is "<<samrat.name<<endl;
   cout<<"the age of student is "<<samrat.age<<endl;
   cout<<"the marks of student are "<<samrat.marks<<endl;

    return 0;
}