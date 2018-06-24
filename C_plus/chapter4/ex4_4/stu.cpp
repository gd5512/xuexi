#include<iostream>
using namespace std;
class complex{
private:
	double real,image;
public:
	complex(){
	  real=0.0;
	  image=0.0;
	  cout<<"Initializing 0 0"<<endl;
	}
	complex(double r,double i=0.0){
	   real=r;
	   image=i;
	   cout<<"Initializing"<<r<<'\t'<<i<<endl;
	}
	complex(complex&com);//���ƹ��캯������
	~complex()
	{
	   cout<<"Destructor"<<endl;
	}
	void assign(complex com)
	{
	  real=com.real;
	  image=com.image;
	}
	void print()
	{
	   cout<<real<<'+'<<image<<'i'<<endl;
	}
};

inline complex::complex(complex&com)//���ƹ��캯��˵��
{
	cout<<"Copy"<<com.real<<'\t'<<com.image<<endl;
	real=com.real;
	image=com.image;
}

complex fun(complex);//����һ������������ֵΪ��
complex global;//����һ������
int main()
{
   cout<<"Entering main"<<endl;
   complex com1,com2(5.6,7.5);
   complex com3=com1;
   com3.print();
   global.print();
   com1=fun(com2);
   com1.print();
   cout<<"Exiting main"<<endl;
   return 0;
}

complex fun(complex com)
{
   cout<<"Entering function"<<endl;
   global.assign(com);
   cout<<"Exiting function"<<endl;
   return global;
}