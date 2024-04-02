#include<iostream>
using namespace std;
class arithmetic
{
    public:
    int ino1;//characteristics
    int ino2;
    arithmetic()//default constructor
    {
        cout<<"inside default construct \n";
        ino1=0;
        ino2=0;
    } 
    arithmetic(int a,int b)//parameterised constructor
    {
        cout<<"inside parameterised construct \n";
        ino1=a;
        ino2=b;
    }
 ~arithmetic()//distructor
    {
        cout<<"inside destruct \n";
    }
    int addition()
    {
        int ians = 0;
        ians = ino1 + ino2;
        return ians;
    }
    int substraction()
    {
        int ians = 0;
        ians = ino1 - ino2;
        return ians;
    }

};
    int main()
    {
         int ivalue1 = 0 , ivalue2=  0 , iret = 0 ;
        cout<<"enter first no \n";
        cin>>ivalue1;
        cout<<"enter second no \n";
        cin>>ivalue2;
        arithmetic obj1;
        arithmetic obj2(ivalue1,ivalue2);
        iret=obj2.addition();
        cout<<"addition is:"<<iret<<"\n";
        iret = obj2.substraction();
        cout<<"substraction is:"<<iret<<"\n";
    
        return 0;
    }

