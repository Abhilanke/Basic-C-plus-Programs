#include<iostream>
using namespace std;
class demo
{
    public:
        int x;
        int y;
        demo()
        {
            cout<<"Insaide default costructor\n";
            x=0;
            y=0;
        }
        demo (int i , int j)
        {
            cout<<"insaid parameterise costructor\n";
            x=i;
            y=j;
        }
        demo(demo & ret)
        {
            cout<<"insaid copy costructor\n";
        }
};
int main()
{
    demo obj();
    demo obj1(11,21);
    demo obj2(obj1);
    return 0;

}

 

       