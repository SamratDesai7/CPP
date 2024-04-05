#include<iostream>
using namespace std;
int volume(int a)
{
    return (a * a* a);
}
int volume(int a ,int b, int c)
{
    return (a * b* c);
}
int volume(int r ,int h)
{
    return (3.14 * r * r * h);
}
int main()
{
    cout<<"volume of a cube is "<<volume(2)<<endl;
    cout<<"volume of a reactangle is "<<volume(2,3,5)<<endl;
    cout<<"volume of a cylinder is "<<volume(2,5)<<endl;
    return 0;
}