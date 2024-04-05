#include<iostream>
using namespace std;
// it will not return the float value it will return the int
int sum(float a, int b){
    return a+b;
}
int main()
{
    cout<<sum(7.9,8);
    return 0;
}