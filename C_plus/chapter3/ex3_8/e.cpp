#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
    int a,b;
	cout<<"��������������"<<endl;
	cin>>a>>b;
	cout<<"����ǰ��ʵ��a="<<a<<'\t'<<"b="<<b<<endl;
	swap(a,b);
	cout<<"���ú�ʵ��a="<<a<<'\t'<<"b="<<b<<endl;
    return 0;
}
void swap(int a,int b){
    cout<<"������..."<<endl;
	cout<<"����ǰ���β�a="<<a<<','<<"b="<<b<<endl;
	int t;
    t=a;
	a=b;
	b=t;
	cout<<"�������β�a="<<a<<",b="<<b<<endl;
}