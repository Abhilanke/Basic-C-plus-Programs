#include<iostream>
using namespace std;
class Demo 

{
 int i;
 public:
 int x;
 private:
 int y;
 public:
 Demo()
{
 x=10;
 y=20;
 i=30;
 }
  void fun()
 {
cout <<"inside public fun\n";
cout <<y;
 gun();
}
    private:
    void gun()
{
    cout <<"inside private gun\n";
    cout <<y;
    }
   };
   int main()
   {
   Demo obj;
   cout <<obj.x<<"\n";
   //cout << obj.y <<"\n";
   //cout << obj.i <<"\n";
    obj.fun();
    //obj.gun();
    return 0;
   }