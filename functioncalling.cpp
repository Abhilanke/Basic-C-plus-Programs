#include<iostream>
using namespace std;

int callvalue(int no)
{

    no++;
    return no;
}
void calladdress(int *p)
{
    (*p)++;
}
void callreference(int&ref)
{
    ref++;
}


int main()
{
    int a=10,b=10,c=10,ret=0;
    ret=callvalue(a);
    cout<<ret<<"\n";
    calladdress(&b);
   cout<<b<<"\n";
    callreference(c);
    cout<<c<<"\n";

    return 0;
}