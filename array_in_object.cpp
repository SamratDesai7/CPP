#include<iostream>
using namespace std;
class stud{
int rollno;
string name;
public:
void getdata();
void display();
};
void stud :: getdata(){
    cout<<"enter the student roll no: "<<endl;
    cin>>rollno;
    cout<<"enter the student name: "<<endl;
    cin>>name;
}
void stud :: display(){
    cout<<"the name of the student is "<<name<<" and the roll no of the student is :"<<rollno<<endl; 
}
int main()
{
    stud s[10];
    for (int i = 0; i < 5; i++)
    {
        s[i].getdata();
        s[i].display();

    }
    
    return 0;
}