#include<iostream>
#include<iomanip>
using namespace std;
bool palindrome(int);
int main()
{
  int m;
  cout<<setw(10)<<'m'<<setw(20)<<"m*m"<<setw(20)<<"m*m*m"<<endl;
  for(m=11;m<1000;m++)
	  if(palindrome(m)&&palindrome(m*m)&&palindrome(m*m*m))
		 cout<<setw(10)<<m<<setw(20)<<m*m<<setw(20)<<m*m*m<<endl;
  return 0;
}
bool palindrome(int n)
{
   int digit[10];
   int m=n,i=0,j;
   do{
     digit[i]=n%10;
	 n/=10;
	 i++;
   }while(n>0);
   for(j=0;j<i;j++)
	   n=n*10+digit[j];
   return (n==m);
}