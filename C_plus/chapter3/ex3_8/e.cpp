#include<iostream>
using namespace std;
void swap(int,int);
int main()
{
    int a,b;
	cout<<"输入两个整数："<<endl;
	cin>>a>>b;
	cout<<"调用前：实参a="<<a<<'\t'<<"b="<<b<<endl;
	swap(a,b);
	cout<<"调用后：实参a="<<a<<'\t'<<"b="<<b<<endl;
    return 0;
}
void swap(int a,int b){
    cout<<"调用中..."<<endl;
	cout<<"交换前：形参a="<<a<<','<<"b="<<b<<endl;
	int t;
    t=a;
	a=b;
	b=t;
	cout<<"交换后：形参a="<<a<<",b="<<b<<endl;
}