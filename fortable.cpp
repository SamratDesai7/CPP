#include<iostream>
using namespace std;
int main()
{
    int i, no;
    cout<<"Enter a number to Create a Multiplication Table:"<<endl;
    cin>>no;
    for ( i = 1; i <=10; i++)
    {
        cout<<no<<"\tX\t"<<i<<"\t=\t"<<no*i<<endl;
    }
    
    return 0;
}