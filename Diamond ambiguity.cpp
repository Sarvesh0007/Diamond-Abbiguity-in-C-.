#include<iostream>
using namespace std;
class A
{
	protected:
		int a;
		public:
			void get1_data()
			{
				cout<<"\nEnter the value of a =";
				cin>>a;
			}
};
class B:virtual public A
{
	protected:
		int b;
		public:
			void get2_data()
			{
				cout<<"\nEnter the value of b =";
				cin>>b;
			}
};
class c:virtual public A
{
	protected:
		int c;
		public:
			void get3_data()
			{
				cout<<"\nEnter the the value of c =";
				cin>>c;
			}
};
class result: public B,public c
{
	public:
		void get4_data()
		{
			cout<<"\nHello ";
		}
};
int main()
{
	result r1;
	r1.get1_data();
	r1.get2_data();
	r1.get3_data();
	r1.get4_data();
}
