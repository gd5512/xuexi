#include<iostream>
#include<algorithm>
using namespace std;


int n,i,flage;
bool compare1(int a,int b )
{
    return a>b;
}
bool compare2(int a,int b )
{
    return a<b;
}
int main()
{
	while (cin>>n)
	{
		int *p;
		p=new int [n];
		for(i=0;i<n;i++)
		{
		  cin>>p[i];
		  //cout<<p[i]<<endl;
		}
	   cin>>flage;
	   if(flage)
		  sort(p,p+n,compare1);
	   else
		  sort(p,p+n,compare2);
	   for(i=0;i<n-1;i++)
	   cout<<p[i]<<' ';
	   cout<<p[n-1]<<endl;
	   //cout<<endl;
	   delete [] p;
	}
   return 0;
}