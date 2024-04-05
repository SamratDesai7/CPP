#include<iostream>
using namespace std;
class addition{
    // public:
        int a, b,c;
    public:
        void input()
        {
        cout<<"Enter First No:"<<endl;
        cin>>a;
        cout<<"Enter Second No:"<<endl;
        cin>>b;
        }
        void calculation()
        {
            c=a+b;
        }
        void show()
        {
        cout<<a<<"+"<<b<<"="<<c<<endl;
}
};
int main()
{
    addition a1;
    a1.input();
    a1.calculation();
    a1.show();
    return 0;
}