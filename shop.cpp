#include<iostream>
using namespace std;
class shop
{
    int itemid[100] ;
    double itemprice[100];
    string name[100];
    int count;
    public :
    void initcount(){ count = 0; }
    void input()
    {
    cout<<"Enter the id of the product :"<<endl;
    cin>>itemid[count];
    cout<<"Enter the name of the product :"<<endl;
    cin>>name[count];
    cout<<"Enter the price of the product :"<<endl;
    cin>>itemprice[count];
    count++;
}
    void display()
    {
        for ( int i = 0; i < count; i++)
        {
            cout<<"item id : "<<itemid[i]<<" product name "<<name[i]<<" has price : "<<itemprice[i]<<endl;
        }        
}
};
int main()
{
    shop s1;
    s1.initcount();
    s1.input();
    s1.input();
    s1.input();
    s1.display();

    return 0;
}