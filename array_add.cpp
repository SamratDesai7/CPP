#include<iostream>
using namespace std;
int main()
{
    int i,j,arr[]={1,2,3,4,5};
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            cout<<i<<"+"<<j<<"="<<arr[i]+arr[j]<<endl;
        }
        
    }
    
    return 0;
}