#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int *p=NULL;
    p=new int[10];
    if(p==NULL)
    {
        cout<<"memory is not succesfully aallocated.";
    }
    else
    {
        cout<<"memory is allocated successfully."<<p<<"\n";
    }
    delete[] p;
    return 0;
}