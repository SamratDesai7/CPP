#include<iostream>
using namespace std;
class complex
{
    int a,b,c;
    public:
     void getdata(int x ,int y, int z){
        a = x;
        b = y;
        c = z;
     }
     void comp(complex i1, complex i2, complex i3){
        a = i1.a + i2.a + i3.a; 
        b = i1.b + i2.b + i3.b; 
        c = i1.c + i2.c + i3.c; 
     }
     void display()
     {
        cout<<a<<"a"<<" - "<<b<<"b"<<" - "<<c<<endl;
     }
};
int main()
{
    complex c1,c2,c3,c4;
    c1.getdata(1,2,3);
    c1.display();

    c2.getdata(4,5,6);
    c2.display();
    
    c3.getdata(7,8,9);
    c3.display();

    c4.comp(c1, c2, c3);
    c4.display();

    return 0;
}