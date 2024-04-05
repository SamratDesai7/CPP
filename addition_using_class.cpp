#include<iostream>
using namespace std;
class addition{
    public:
    void add()
    {
        int a, b;
        cout<<"Enter First No:"<<endl;
        cin>>a;
        cout<<"Enter Second No:"<<endl;
        cin>>b;
        cout<<a<<"+"<<b<<"="<<a+b<<endl;

    }
};
int main()
{
    addition a1;
    a1.add();
    return 0;
}