#include<iostream>
using namespace std;
class student{
    int a,b;
    public :
    int c ,d;
    // void getdata(int a, int b){

    // }
    void show(int a, int b){
        cout<<"Value of a is :"<<a<<endl;
        cout<<"Value of b is :"<<b<<endl;
        cout<<"Value of c is :"<<c<<endl;
        cout<<"Value of d is :"<<d<<endl;
    }
};
int main()
{
    student s1;
    s1.c=10;
    s1.d=99; // we can accsess it directly coz we declared it as public
    // s1.a=9; it will throw error we cant accsess it coz it is private 
    s1.show(1,2);
    return 0;
}