#include<iostream>
using namespace std;
class base
{
    public:
   
    int i,j;
    base()
    {
        cout<<"base constructor\n";

    }
    ~base()
    {
        cout<<"base destructor\n";
    }
};
class derived  : public base
{
    public:
    int a,b,c;
    derived()
    {
        cout<<"derived constructor\n";
    }
    ~derived()
    {
        cout<<"derived destructor\n";
    }
};
int main()
{ 
    derived dobj;
     
    return 0;
}