#include<iostream>
using namespace std;
int main()
{
    int i=1, no;
    cout<<"Enter the Number for Multiplication Table:"<<endl;
    cin>>no;
    while (i<=10)
    {
        cout<<no*i<<endl;
        i++;
    }
    
    return 0;
}