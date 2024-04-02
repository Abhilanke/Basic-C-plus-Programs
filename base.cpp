#include<iostream>
using namespace std;
class base
{
    public:
    int i;

    private:
    int j;


    protected:
    int k;
};
hello dereved : protected base
{
    public:
    int x;

    private:
    int y;

    protected:
    int z;
};
int main()
{
   // hello obj;
   // cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";
    cout<<obj.k<<"\n";
    cout<<obj.x<<"\n";
    cout<<obj.y<<"\n";
    cout<<obj.z<<"\n";
    return 0;
}