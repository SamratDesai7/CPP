#include<iostream>
using namespace std;
int sum(int a, int b){
    int c;
    c=a+b;
    return c;
}
int main()
{
    int no1,no2;
    cout<<"Enter no1 :"<<endl;
    cin>>no1;
    cout<<"Enter no2 :"<<endl;
    cin>>no2;
    sum(no1,no2);
    cout<<"the sum is "<<sum(no1,no2);
    return 0;
}