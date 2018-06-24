#include<iostream>
#include<cmath>
using namespace std;
class complex{
private:
	double Real,Image;
public:
	
	complex(double r=0.0,double i=0.0){
	   Real=r;
	   Image=i;
	}
	complex(complex&com)//复制构造函数声明
	{
		Real=com.Real;
		Image=com.Image;
	}
	
	
	void print()
	{
	   cout<<"Real="<<Real<<'\t'<<"Image="<<Image<<'\n';
	}
	complex operator+(complex);
	complex operator+(double);
	complex operator=(complex);
	complex operator+=(complex);
	double abs(void);
	complex operator*(complex);
	complex operator/(complex);
};

complex complex::operator+(complex c)
{
	complex temp(Real+c.Real,Image+c.Image);
	return temp;
}

complex complex::operator+(double d)
{
	return complex(Real+d,Image);
}

complex complex::operator+=(complex c)
{
	complex temp;
	temp.Real=Real+c.Real;
	temp.Image=Image+c.Image;
	Real=temp.Real;
	Image=temp.Image;
	return temp;
}

complex complex::operator=(complex c)
{
	complex temp;
	temp.Real=c.Real;
	temp.Image=c.Image;
	Real=temp.Real;
	Image=temp.Image;
	return temp;
}

double complex::abs(void)
{
   return sqrt(Real*Real+Image*Image);
}
complex complex::operator*(complex c)
{
	return complex(Real*c.Real-Image*c.Image,Real*c.Image+c.Real*Image);
}

complex complex::operator/(complex c)
{
	double d=c.Real*c.Real+c.Image*c.Image;
	return complex((Real*c.Real+Image*c.Image)/d,(Image*c.Real-Real*c.Image)/d);
}

int main()
{
  complex c1(1.0,1.0),c2(2.0,2.0),c3(4.0,4.0),c;
  double d=0.5;
  c1.print();
  c=c2+c3;
  c.print();
  c+=c1;c.print();
  c=c+d;c.print();
  c=c3*c2;c.print();
  c=c3/c1;c.print();
  cout<<"c3的模为："<<c3.abs()<<endl;
  c=c3=c2=c1;c.print();
  c+=c3+=c2+=c1;c.print();
   return 0;
}

