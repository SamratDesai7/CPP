#include<iostream>
using namespace std;
int fib(int n)
{   
    if (n<=1)
    {
        return 1;
    }
    //1,1,2,3,5,8,13
    return fib(n-2) + fib(n-1);
}

// int fact(int n)
// {   
//     if (n<=1)
//     {
//         return 1;
//     }
    
//     return n * fact(n-1);
// }
int main()
{
    int a,i;
    cin>>a;
    for ( i = 0; i < a; i++)
    {
       
    cout<<fib(i)<<endl;
    }
    
    return 0;
}