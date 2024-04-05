#include<iostream>
using namespace std;
int main()
{
    int i=1, no;
    cout<<"Enter a Number to create a multiplication table:\n";
   cin>>no;
    do{
        cout<<i*no<<endl;
        i++;
    }
    while (i<=10);
    
    return 0;
}