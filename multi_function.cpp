#include<iostream>
using namespace std;
// it will not identify the function if you are trying with same function name and same no of arguments to the function with same name
int sum(char a,int c, int b){
    return a+b;
}
int sum(int a, int b){
    return a-b;
}
int main()
{
    cout<<sum(9.7,8);
    return 0;
}