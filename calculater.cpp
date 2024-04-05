#include<iostream>
using namespace std;
int main()
{
  int a, b ;
  int choice;

  cout<<"Enter 1 for addition:\t"<<endl;
  cout<<"Enter 2 for Substraction:\t"<<endl;
  cout<<"Enter 3 for Multiplication:\t"<<endl;
  cout<<"Enter 4 for Division:\t"<<endl;
  cout<<"Enter Your Choice:\t"<<endl;
  cin>>choice;
  switch (choice)
  {
  case 1:
  cout<<"Enter First No:\t"<<endl;
  cin>>a;
  cout<<"Enter Second No:\t"<<endl;
  cin>>b;
  cout<<"The Addition is :\t"<<a+b<<endl;

    break;
    case 2:
  cout<<"Enter First No:\t"<<endl;
  cin>>a;
  cout<<"Enter Second No:\t"<<endl;
  cin>>b;
  cout<<"The Substraction is :\t"<<a-b<<endl;
    break;
    case 3:
  cout<<"Enter First No:\t"<<endl;
  cin>>a;
  cout<<"Enter Second No:\t"<<endl;
  cin>>b;
  cout<<"The Multiplication is :\t"<<a*b<<endl;
    break;
    case 4:
  cout<<"Enter First No:\t"<<endl;
  cin>>a;
  cout<<"Enter Second No:\t"<<endl;
  cin>>b;
  cout<<"The Division is :\t"<<a/b<<endl;
    break;
  default:
  cout<<"You have entered : "<<choice<<" it is wrong choice"<<endl;
    break;
  }
}