#include<iostream>
using namespace std;
int main()
{
    int a,b;
	cout<<"��������������"<<endl;
	cin>>a>>b;
	cout<<"a="<<a<<'\t'<<"b="<<b<<endl;
	if(b>a)
	{
	  int t;
	  t=a;
	  a=b;
	  b=t;
	}
	cout<<"a="<<a<<'\t'<<"b="<<b<<endl;
    return 0;
}