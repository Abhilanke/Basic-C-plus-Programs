#include<iostream>
using namespace std;
class demo
{
	public:
		int i,j;
		static int x;
		demo(int a=10,int b=30)
		{
			cout<<"Inside constructor\n";
			this -> i = a;
			this-> j =b; 
		}
		void fun(int no)
		{
			cout<<"Inside non-static\n";
			cout<<this->i<<"\n";
			cout<<this->j<<"\n";
			cout<<this->demo::x<<"\n";
		}
		static void gun(int value)
		{
			cout<<"Inside static gun"<<"end1";
		//	cout<<this->i<<"\n";
		}
};
int demo::x=30;
int main()
{
	cout<<demo::x<"\n";
	demo::gun(11);
	demo obj(11);
	obj.fun(21);
	cout<<sizeof(obj)<<"\n";
	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";
	obj.gun(11);
	return 0;
}
