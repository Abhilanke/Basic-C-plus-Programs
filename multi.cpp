#include<iostream>
using namespace std;
class base
{
    public:
   
    int i,j;
    base()//parents
    {
        cout<<"base constructor\n";

    }
    ~base()
    {
        cout<<"base destructor\n";
    }
};
class derived  : public base//child
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
class derived1 : public derived//grand child class
{
    public:
    int k,l;
    derived1()
    {
        cout<<"derived1 constructor\n";
    }
    ~derived1()
    {
        cout<<"derived1 destructor\n";
    }
};
int main()
{ 
    derived1 dobj;
     
    return 0;
}