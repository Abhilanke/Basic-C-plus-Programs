#include<iostream>
using namespace std;
class arm
{
    public:


    int no;
    int num;
    arm()
    {
        cout<<"inside the default constructor\n";

         no=0;
         num=0;
    }
    arm(int a,int b)
    {
        cout<<"inside the parameterisd constructor\n";
        no=a;
        num=b;
    }
     ~arm()
     {
        cout<<"destructor\n";       
     }

    int mult()
    {
        int ans=0;
        ans=no*num;
        return ans;
    }
    int div()
    {
        int ans=0;
        ans=no/num;
        return ans;
    }
};

int main()
{
    int value1=0,value2=0,ret=0;
    cout<<"Enter the 1st no:\n";
    cin>>value1;
    cout<<"Enter the 2nd no:\n";
    cin>>value2;
    arm obb1;
    arm obb2(value1,value2);
    ret=obb2.mult();
    cout<<"multiplication is:"<<ret<<"\n";
    ret=obb2.div();
    cout<<"division is:"<<ret<<"\n";

    return 0;


}                      