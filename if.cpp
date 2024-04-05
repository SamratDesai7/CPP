#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: \t";
    cin>>age;

    if(age>=18 && age<100){
        cout<<"you are Eligible for voting ";

    }
    else if(age>=100){
        cout<<"Enter valid age ";
    }
    else{
        cout<<" your age is :"<<age<<"your are unable to vote";
    }
    return 0;
}