#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int* b;
    b= &a;
    cout<< "the address of a is"<<*b<<endl; 
    cout<< "the address of a is"<<&a<<endl;
    int** c;
    c= &b; 
    cout<< "the address of c is"<<&b<<endl;
    cout<< "the address of c is"<<**c<<endl;
    return 0;
}