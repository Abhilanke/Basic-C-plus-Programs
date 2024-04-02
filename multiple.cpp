#include<iostream>
using namespace std;
class base1
{
    public:
   
    int i,j;
    base1()//parents
    {
        cout<<"base1 constructor\n";

    }
    ~base1()
    {
        cout<<"base1 destructor\n";
    }
};
class base2
{
public:
int a,b;
base2()
{
cout<<"base2 constructor\n";

}
~base2()
{
    cout<<"base2 destructor\n";
}
};
class derived : public base1,base2
{
    public:
    int k,l;
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
