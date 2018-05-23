#include<iostream>
using namespace std;
int n=100;
int main()
{
    int i=200,j=300;
	cout<<n<<'\t'<<i<<'\t'<<j<<endl;
	{
		int i=500,j=600,n;
		n=i+j;
		cout<<n<<'\t'<<i<<'\t'<<j<<endl;
		cout<<::n<<endl;
	}
	n=i+j;
	cout<<n<<'\t'<<i<<'\t'<<j<<endl;
    return 0;
	
}
