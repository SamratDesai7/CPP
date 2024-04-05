#include<iostream>
using namespace std;
inline int fun(int a)
{
    static int b=5; // this value will be execute only once 
    b = b+1;
    int c;
    c=a+b;
    return c;
}
int main()
{
    cout<<fun(2)<<endl;
    cout<<fun(2)<<endl;
    cout<<fun(2)<<endl;
    cout<<fun(2)<<endl;
    cout<<fun(2)<<endl;
    return 0;
}