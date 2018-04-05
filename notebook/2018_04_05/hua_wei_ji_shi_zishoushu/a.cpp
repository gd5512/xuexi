#include<iostream>
#include<cmath>
using namespace std;
int n,i,k=1,j,num,t;
int weishu(int s);
int main()
{
    while( cin>>n)
	{
	    	num=0;
		   for(j=0;j<=n;j++)
		   {
			   t=weishu(j);
			  if(((j*j)%(int(pow(10,t)))==j))
				   num++;
		   }
		   cout<<num<<endl;
	}
   return 0;
}
int weishu(int s)
{  
    	int ii=0;
		int kk=1;
       if(s==0)
		   ii=1;//Î»Êý
	   else
	   {
		   while( s>=kk)
		   {
			  ii++;
			  kk=kk*10;
		   }
	   }
	   return ii;
}